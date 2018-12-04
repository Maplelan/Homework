//经测验，自定义一个关于-1的函数会比使用math.h中的pow更快且更加节省资源 ，故此处不引入math.h头文件 
#include <stdio.h>


int mypow (int input){							//随便定义一个函数，就叫做mypow()吧,该函数接受一个int值，暂时叫它input，执行完流程后输出一个int值 
	if(input % 2 ==0){							//如果input除以2的余数是0(是偶数)，返回1，否则返回-1 
		return 1;
	}else{
		return -1;
	}
}

int main(){										//程序的入口：main函数，执行完流程后返回一个int，一般此时程序已经结束，返回什么都没有意义了，所以我的代码中main没有return 0； 
  int n;
  double sum=0;
  scanf("%d",&n);								//接受一个整数并邮寄，收件地址是n的地址，即 &n ，&为取变量地址的符号，告诉你这个变量住在内存中的哪个地方 
  for(int i=0;i<n;i++){							//注意：这次i是从0开始，因此循环条件由 <= 变为 <  
  		sum += mypow(i) * 1.0/(1 + 3*i); 		//偶数项是负数，注意i从0开始，偶数项时i是奇数 
  }
  printf("sum = %.3lf",sum);					//注意题目，保留3位小数 
}


