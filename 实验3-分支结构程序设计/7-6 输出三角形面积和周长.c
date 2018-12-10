#include <stdio.h>
#include <math.h>
double getArea(int a,int b,int c);
double getPerimeter(int a,int b,int c);
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if( (a+b)<=c || (a+c)<=b || (b+c)<=a){
		printf("These sides do not correspond to a valid triangle");
		return 0;
	}
	printf("area = %.2lf; perimeter = %.2lf",getArea(a,b,c),getPerimeter(a,b,c));
} 
double getArea(int a,int b,int c){
	double s=(a+b+c)/2.0;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}
double getPerimeter(int a,int b,int c){
	return a+b+c;
}
