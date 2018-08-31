#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float a,b,c;
	scanf("%f",&a);
	b=(a+5)/(2*(a+1));
	c=(pow(b,2))+(a*(a-2*b))/(a*b);
	printf("%f",c);
	return 0;
}