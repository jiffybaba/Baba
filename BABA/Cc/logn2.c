#include "stdio.h"

float power(float a, float b) {
float x=a;
	for(int i=0;i<b-1;i++)
		a = a*x;
	return a;
}


float logn(float a) {
	float x;
	x = a;
	printf("%f",x);
	float ctr = 0;
	
	for(int i = 0;x<2;i++) {
		x = x/10;
		printf("a");
		printf("%f",x);
		ctr++; 
	}
	
	printf("%f",ctr);
	x = x-1;
	printf("%f",x);
	for(int i=1;i<151;i++) {
		if(i%2==0)
			x = x + power(x,i+1)/(i+1);
		else
			x = x - power(x,i+1)/(i+1);

		printf("%f\t",x);

	}

	x = x+ctr*2.303;
	printf("%f",x);
	return x;
	
}

int main() {
	
	
	
	logn(10);
	
}