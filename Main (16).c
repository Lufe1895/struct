#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,i,j;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		for(j=0;j<i;j++){
			printf("%d",i);
		}
		printf("\n");
	}
	for(i=a-1;i>0;i--){
		for(j=0;j<i;j++){
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}