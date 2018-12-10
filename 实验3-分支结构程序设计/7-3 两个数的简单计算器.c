#include <stdio.h>
int main(){
	int a,b,res;
	char ch;
	scanf("%d %c %d",&a,&ch,&b);
	switch (ch){
		case '+':
			res=a+b;
			break;
		case '-':
			res=a-b;
			break;
		case '*':
			res=a*b;
			break;
		case '/':
			res=a/b;
			break;
		case '%':
			res=a%b;
			break;
		default :
			printf("ERROR");
			return 0;
	}
	printf("%d",res);
} 
