#include <stdio.h>						//����ͷ�ļ�stdio.h����ͷ�ļ�������scanf(),printf() 
int main(){								//�������ڣ�main()���� 
  int n;
  double sum=0;
  scanf("%d",&n);						//����һ������(%d)���벢�ʼģ� �ռ���ַ�Ǳ���n��סַ����&n 
  for(int i=1;i<=n;i++){
  		sum+= 1.0/(2*i-1);				//sum+=��˼����sum = sum + 
  }
  printf("sum = %.6lf",sum);
}
