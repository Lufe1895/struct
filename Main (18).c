#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,i,k,sum,aux=0,j;
	scanf("%d %d",&a,&k);
	int *b=malloc(a*sizeof(int));
	for(i=0;i<a;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<a-k;i++){
		sum=0;
		for(j=0;j<k;j++){
			sum+=b[i+j];
		}
		if(sum>aux){
			aux=sum;
		}
	}
	printf("%d",aux);
	free(b);
	return 0;
}