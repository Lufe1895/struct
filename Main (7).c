#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int a,b=0;
	scanf("%d",&a);
	if(a%2==0){
		a=a/2;
		b++;
	}
	else{
		a++;
		b++;
	}
	if(a>99){
		a=a/100;
		b++;
	}
	else{
		if(a<100&&a>9){
			a=a/10;
			b++;
		}
	}
	if(a%3==0){
		a--;
		b++;
	}
	printf("%d %d",a,b);
	return 0;
}