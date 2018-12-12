#include <stdio.h>
int getgy(int m,int n);
int main(){
	int a,b,gyn,gbn;
	scanf("%d %d",&a,&b);
	gyn=getgy(a,b);
	gbn=(a*b)/gyn;
	printf("%d %d",gyn,gbn);
 }
int getgy(int m,int n){
	if(m % n == 0){
		return n;
	}else{
		return getgy(n,m%n);
	}
}
