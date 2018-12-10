#include <stdio.h>
int fact(int n){
	int out=1;
	//方法1：从 n * (n-1) * (n-2) * ... * 2 * 1 解题 
	for(int i=0;i<n;i++){
		out=out*(n-i);
	} 
	return out;
	//方法2：从 1*2*3*...*(n-1)*n 解题 
	for(int i=1;i<=n;i++){
		out=out*i;
	}
	return out;
}
int main(){
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum+=fact(i);
	}
	printf("%d",sum);
}
