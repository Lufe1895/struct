#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a+b+c==180&&(a>0&&b>0&&c>0)){
		if(a==b&&b==c){
			printf("EQUILATERO");
		}
		if(a==90||b==90||c==90){
			printf("ESCALENO");
		}
		if((a==b&&a!=c)||(a==c&&a!=b)||(c==b&&c!=a)){
			printf("ISOSCELES");
		}
	}
	else{
		printf("ERROR");
	}
	return 0;
}