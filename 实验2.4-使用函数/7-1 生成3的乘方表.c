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
//����ʱ�ᵯ����ɫ�ľ���[Warning] conflicting types for built-in function 'pow' ,����Ϊ���pow��C��׼����math.h�е�powͬ���ˣ����������ﲢû��ʹ�õ�math.h�����Կ��Ժ��� 
