#include <stdio.h>
long pow(int three,int i){
	long output=1;
	for (int j=0;j<i;j++){
		output=output*three;
	}
	return output;
}
int main(){
	int input;
	scanf("%d",&input);
	for(int k=0;k<=input;k++){
		printf("pow(3,%d) = %ld\n",k,pow(3,k));
	}
}
//编译时会弹出黄色的警告[Warning] conflicting types for built-in function 'pow' ,是因为你的pow与C标准库中math.h中的pow同名了，但是在这里并没有使用到math.h，所以可以忽略 
