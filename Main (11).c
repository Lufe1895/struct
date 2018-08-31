#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int a,b,c,d,e,f;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>c){
		e=fabs(c-a+24);
	}
	else{
		e=fabs(c-a);
	}
	if(b>d){
		f=fabs(d-b+60);
		e--;
	}
	else{
		f=fabs(d-b);
	}
	printf("%d %d",e,f);
	return 0;
}