#include <stdio.h>

int main() {
	int a,b,c,x,y,z;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&x,&y,&z);
	if((a*b*c)>=(x*y*z))
		printf("0");
	else
		printf("1");
	return 0;
}