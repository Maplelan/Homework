#include <stdio.h>								//����ͷ�ļ�stdio.h�����ļ��ڶ�����scanf()��printf()���� 

int main(){										//�������ڣ�main()���� 
  int in;										//����һ��int���� in(put) 
  double sum=0;									//��������sum,������ֵΪ0��ע����ĿҪ�󣬽����double���͵�
  scanf("%d",&in);								//����һ������(%d)���벢�ʼģ��ռ�סַΪ��in��סַ����&in 
  for (int i = 1;i<=in;i++){					//ѭ����i��1��ʼ��inλ�ã�һ��ѭ��in�� 
    sum += 1.0/i;								//sum+= xxx����sum=sum+xxx����˼ 
  }
  printf("sum = %.6lf",sum);					//��ӡ��ע����ĿҪ�󣬱����¿ո�ͱ�����λ˫����С��(%.6lf) 
}
