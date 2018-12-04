#include <stdio.h> 									//引入头文件stdio.h，该头文件定义了scanf(),printf()函数 

float getC(int f){									//定义一个getC()函数，输入一个int整数，然后求摄氏度并返回一个float值 
	return 5.0*(f-32)/9.0;							//根据题目要求，getC必须返回一个有小数的数，因此GetC的前面是float而不是int 
}

int main(){
	int low,high;									//定义两个变量，为输入的最小值和最大值 
	scanf("%d %d",&low,&high);						//接受两个整数(%d)并邮寄，收件地址为low和high的地址，即 &low 和 &high 
	
	if (low>high){									//如果最小值大于最大值，则打印Invalid.，然后main函数返回一个0 
		printf("Invalid.");
		return 0;									//一个函数一旦return(返回)，即代表这个函数生命周期的结束，特别地，main函数的结束意味着整个程序的结束 
													//实际上，main函数返回的int可以随便写，return 23333；也行，但是题目要求程序结束必须返回0，故在此必须返回0 
	}
	printf("fahr celsius\n");						//注意带上\n换行 
	for(  ;low <= high;low+=2){						//没想到吧！for的第一个部分其实可以不写哒 
		printf("%d%6.1f\n",low,getC(low));			//%.1f表示保留一位小数的float值，%6.1f表示“占据6个字符宽度 ”的保留1位小数的float值，此处根据题目要求作答，平时应该用不上 
													//可以显而易见地看出%6.1f指向的是getC()，这个就是我们之前定义的摄氏度换算的函数，它接受low的值，然后返回一个float类型的计算结果 
	}
}
