#include <stdio.h>								//引入头文件stdio.h，该文件内定义了scanf()，printf()函数 

int main(){										//程序的入口：main()函数 
  int in;										//声明一个int变量 in(put) 
  double sum=0;									//声明变量sum,并设置值为0，注意题目要求，结果是double类型的
  scanf("%d",&in);								//接受一个整数(%d)输入并邮寄，收件住址为到in的住址，即&in 
  for (int i = 1;i<=in;i++){					//循环，i从1开始到in位置，一共循环in次 
    sum += 1.0/i;								//sum+= xxx就是sum=sum+xxx的意思 
  }
  printf("sum = %.6lf",sum);					//打印，注意题目要求，别落下空格和保留六位双精度小数(%.6lf) 
}
