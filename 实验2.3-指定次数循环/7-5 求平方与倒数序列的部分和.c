//����Ŀ������f(m)=m2 + (m+1)2 + ... + n2 
//			  g(m)=1/m + 1/(m+1) + ... + 1/n
//			  sum =f(m)+g(m)
#include <stdio.h> 

double f(int m,int n){							//����һ��f()��������������int������ע�⣬������ĿҪ�����ķ���ֵ������˫����С��(double) 
	double result=0;							//����һ��result�����������һ��Ҫ���ص�ֵ 
	for (;m<=n;m++){							//f(m)=m2 + (m+1)2 + ... + n2
		result+= m*m;							//�ȼ���result=result+ m*m 
	}
	return result;								//����ressult��ֵ�������������ڽ��� 
}

double g(int m,int n){							//���庯��g��ע�⣡�����m,n,result�Ѿ���������f������m,n,result�ˣ�����ֻ�ں���{�����ŷ�Χ����Ч} 
	double result=0;
	for(;m<=n;m++){
		result+= 1.0/m;
	}
	return result;
}

int main(){
	int low,high;
	scanf("%d %d",&low,&high);					//������������������ʼģ��ʼĵ�ַΪlow��high�ĵ�ַ 
	double sum =f(low,high)+g(low,high);		//��������sum��Ȼ������f()��g(),��low��Ϊm��high��Ϊn��f()g()���㣬������ 
	printf("sum = %.6f",sum);
}
