#include "stdio.h"

float power(float a, float b) {
float x=a;
	for(int i=0;i<b-1;i++)
		a = a*x;
	return a;
}

float logn(float a) {
	float x;
	x = (a-1)/(a+1);
	float c = x;
	printf("%f\n",x );
	for(float i=1;i<151;i++) {
		printf("%f\t",i);
		float f = 2*i+1;
		printf("%f\t",f);
		float b = power(c,f);
		printf("%f\t",b);
		
		
		float e = b/f;
		printf("%f\t",e);
		x = x+b;
		printf("%f\n",2*x);
	}
	x=2*x;
	return x;
}

int main() {
	printf("hello world");
	float a = power(0.333333,3.000000);
	printf("%f",a);
	logn(10);
	
}