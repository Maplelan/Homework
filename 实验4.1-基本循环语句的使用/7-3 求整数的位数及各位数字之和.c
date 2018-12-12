#include <stdio.h>
int main(){
	int n,l=0,sum=0;
	scanf("%d",&n);
	while(n!=0){
		sum+=n%10;
		l++;
		n/=10;
	}
	printf("%d %d",l,sum);
 }

