#include <stdio.h>						//引入头文件stdio.h，该头文件定义了scanf(),printf() 
int main(){								//程序的入口：main()函数 
  int n;
  double sum=0;
  scanf("%d",&n);						//接受一个整数(%d)输入并邮寄， 收件地址是变量n的住址，即&n 
  for(int i=1;i<=n;i++){
  		sum+= 1.0/(2*i-1);				//sum+=意思就是sum = sum + 
  }
  printf("sum = %.6lf",sum);
}
