#include <stdio.h>
int main(){
	int l=0,b=0,d=0,o=0;
	char c;
	for(int i=0;i<10;i++){
		c=getchar();
		if(c>='A'&&c<='Z'){
			l++;
			continue;
		}else if(c>='a'&&c<='z'){
			l++;
			continue;
		}else if(c == ' '||c == '\n'){
			b++;
			continue;
		}else if(c>='0'&&c<='9'){
			d++;
			continue;
		}else{
			o++;
		}
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d",l,b,d,o);
} 
