#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,aux,cont,i,j,k;
	scanf("%d",&a);
	int *b=malloc(a*sizeof(int));
	for(i=0;i<a;i++){
		scanf("%d",&b[i]);
	}
	k=b[0];
	for(i=0;i<a;i++){
		for(j=0;j<a-1;j++){
			if((b[j]>b[j+1])){
				aux=b[j];
				b[j]=b[j+1];
				b[j+1]=aux;
				if(b[j+1]==k)
					cont=j+1;
			}
		}
	}
	printf("%d",cont);
	free(b);
	return 0;
}