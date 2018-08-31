#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float a,b,c,d;
	scanf("%f %f %f",&a,&b,&c);
	d=(a+b+c)/3;
	if(d>=6)
		printf("1");
	else
		printf("0");
	return 0;
}