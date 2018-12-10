#include <stdio.h>
int main(){
	int n,res;
	scanf("%d",&n);
	if(n<0)  res = -1;
	if(n==0) res =  0;
	if(n>0)  res =  1;
	printf("sign(%d) = %d",n,res);
} 
