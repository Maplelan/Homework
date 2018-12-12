#include <stdio.h>
int main(){
	int n,min;
	scanf("%d",&n);
	int num[n];
	for (int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	min=num[0];
	for (int i=0;i<n-1;i++){
		if(min > num[i]){
			min=num[i];
		}
	}
	printf("min = %d",min);
 }

