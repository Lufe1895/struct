#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n,j,cont=0,i,k;
	scanf("%d %d",&n,&j);
	k=j+1;
	int *a=malloc(k*sizeof(int));
	for(i=0;i<j;i++){
		scanf("%d",&a[i]);
	}
	a[j]=a[0];
	for(i=0;i<j;i++){
		if((a[i]+a[i+1])%n==0)
			cont++;
	}
	printf("%d",cont);
	free(a);
	return 0;
}