//把题目看作：f(m)=m2 + (m+1)2 + ... + n2 
//			  g(m)=1/m + 1/(m+1) + ... + 1/n
//			  sum =f(m)+g(m)
#include <stdio.h> 

double f(int m,int n){							//定义一个f()函数，接受两个int变量。注意，根据题目要求，它的返回值必须是双精度小数(double) 
	double result=0;							//声明一个result变量，储存等一下要返回的值 
	for (;m<=n;m++){							//f(m)=m2 + (m+1)2 + ... + n2
		result+= m*m;							//等价于result=result+ m*m 
	}
	return result;								//返回ressult的值，函数生命周期结束 
}

double g(int m,int n){							//定义函数g，注意！这里的m,n,result已经不是上面f函数的m,n,result了，变量只在函数{大括号范围内有效} 
	double result=0;
	for(;m<=n;m++){
		result+= 1.0/m;
	}
	return result;
}

int main(){
	int low,high;
	scanf("%d %d",&low,&high);					//程序接受两个整数并邮寄，邮寄地址为low和high的地址 
	double sum =f(low,high)+g(low,high);		//声明变量sum，然后引用f()和g(),把low作为m，high作为n给f()g()计算，最后相加 
	printf("sum = %.6f",sum);
}
