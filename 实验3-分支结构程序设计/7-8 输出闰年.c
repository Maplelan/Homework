#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n<2000 || n>2100){
		printf("Invalid year!");
		return 0;
	}
	if(n<2004){
		printf("None");
	}
	for(int i=2004;i<=n;i++){
		if(i==2100)break;
		if(i%4==0)printf("%d\n",i);
	}
} 
