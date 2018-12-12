#-*- coding: utf-8 -*-
#encoding=utf-8
#coding:utf-8
import os
import re
import subprocess
import sys


def main():
    #声明
    cwd = sys.path[0]       #当前工作目录，不带\
    retry=5
    fileList=walk4files(cwd,"c")
    fileList_noSpace=sort(fileList)
    failedPic=[]
    cmdOut=[]
    #开始工作
    #run("rmdir /s/q "+cwd+"\\pic") #删除pic文件夹
    run("mkdir "+cwd+"\\pic")
    for i in range(len(fileList)):
        print("第"+str(i)+"次外循环，共"+str(len(fileList))+"次")
        if os.path.isfile(cwd+"\\pic\\"+fileList_noSpace[i]+".png"):
            print(fileList[i]+"的图片已存在\n")
            continue
        msg=""
        for j in range(retry+1):
            print("生成"+fileList_noSpace[i]+".png中\n")
            msg = run(genCMD(cwd+"\\"+fileList[i],fileList_noSpace[i],cwd))
            if os.path.isfile(cwd+"\\pic\\"+fileList_noSpace[i]+".png"):
                print(fileList[i]+"-----------------------生成成功("+str(j)+"次重试)\n")
                break
            if(j==(retry+1)):
                print(fileList[i]+"生成失败\n")
                failedPic.append(fileList[i])
        cmdOut.append(msg)
        #-----------------------------------------------------------------

    #生成README.md
    print("开始生成README")
    with open(cwd+"\\README.md",'w') as f:
        cwdname = cwd.split("\\")[-1]     #当前目录名
        f.write("# 金陵科技学院-18数字媒体技术-"+cwdname+"\n")
        f.write("> 此文档及相关图片由程序自动生成\n")
        for i in range(len(failedPic)):
            f.write("\t"+failedPic[i]+" 的图片生成失败\n")
        f.write("\n")
        f.write("在上面的文件列表中点击相关文件名即可阅览/复制源代码\n")
        f.write("以下为图片阅览\n")
        for i in range(len(fileList)):
            f.write("### "+fileList[i]+"\n")
            f.write("!["+fileList[i]+"](./pic/"+fileList_noSpace[i]+".png)\n")
    print("README文档生成成功")



#根据参数输出生成图片的命令，返回一个字符串
#文件名，欲生成的图片名(不需带后缀，默认.png),生成图片文件夹(不需加\，会自动生成在该文件夹下的pic里面)
def genCMD(generatedFile,targetName,outputDir):
    cmdstr="carbon-now \""+generatedFile+"\" -t "+targetName+" -l "+outputDir+"\pic -h"
    return cmdstr

#执行CMD命令，返回字符串结果，这是一个堵塞方法
def run(cmds):
    try:
        sub=subprocess.check_output(cmds,shell=True)
        return str(sub.decode('utf-8'))
    except subprocess.CalledProcessError as e:
        return str(e.output)
       

#处理一个List，为每一个output去空格
def sort(alist):
    newlist=[]
    for i in alist:
        newlist.append(re.sub(' ','',i))
    return newlist

#遍历某个目录的所有文件(可以指定后缀名,例"c",不包括点)，返回一个List
def walk4files(dir,suffix = ""):
    nameList=[] 
    for root, dirs, files in os.walk(dir):
        for name in files:
            if suffix == "":
                nameList.append(name)
            elif re.findall(suffix+"$", name, re.I):
                nameList.append(name)
            else:
                continue
    return nameList

if __name__=="__main__":
    main()
