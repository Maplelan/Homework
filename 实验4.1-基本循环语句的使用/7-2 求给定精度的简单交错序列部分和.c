#include <stdio.h>
#include <math.h>
int main(){
	int n=1, flag=1;
	double eps,sum=0;
	scanf("%lf", &eps);
	if(eps>1)sum=1;
	while(fabs(1.0/n) >= eps){
		sum+=flag*1.0/n;
		flag=-flag;
		n+=3;
	}
		
	printf("sum = %.6lf\n", sum);
 }

