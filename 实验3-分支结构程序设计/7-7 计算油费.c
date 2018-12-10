#include <stdio.h>
int main(){
	int a,b;
	char c;
	float res,oilp,count;
	scanf("%d %d %c",&a,&b,&c);
	switch(b){
		case 90:
			oilp=6.95;
			break;
		case 93:
			oilp=7.44;
			break;
		case 97:
			oilp=7.93;
	}
	switch(c){
		case 'm':
			count=0.95;
			break;
		case 'e':
			count=0.97;
	}
	res=a*oilp*count;
	printf("%.2f",res);
} 
