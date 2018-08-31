#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("El numero mayor es %d",a);
		}
		else{
			printf("El numero mayor es %d",c);
		}
	}
	else{
		if(b>c){
			printf("El numero mayor es %d",b);
		}
		else{
			printf("El numero mayor es %d",c);
		}
	}
	return 0;
}