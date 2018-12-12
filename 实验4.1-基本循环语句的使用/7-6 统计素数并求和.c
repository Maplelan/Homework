//仅部分正确 

#include <stdio.h>
int check(int n);
int main(){
	int m,n,s=0,sum=0;
	scanf("%d %d",&m,&n);
	for (int i=m;i<=n;i++){
		if(m==1){
			s++;
			sum++;
			continue;
		}
		if(check(i)){
			s++;
			sum+=i;
		}
	}
	printf("%d %d",s,sum);
 }
int check(int n){
	if(n==1)return 1;
	for (int i=2;i<n;i++){
		if(n%i==0)return 0;
	}
	return 1;
}
