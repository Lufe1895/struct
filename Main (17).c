#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,i;
	scanf("%d",&a);
	int *b=malloc(a*sizeof(int));
	for(i=0;i<a;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<a;i++){
		if(b[i]%3==0||b[i]%5==0){
			if(b[i]%3==0&&b[i]%5==0){
				printf("FizzBozz\n");
			}
			else{
				if(b[i]%3==0){
					printf("Fizz\n");
				}
				else{
					printf("Bozz\n");
				}
			}
		}
		else{
			printf("NoFizzBozz\n");
		}
		
	}
	free(b);
	return 0;
}