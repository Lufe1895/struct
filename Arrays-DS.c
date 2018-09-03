#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int op,i;
	scanf("%d",&op);
	int *a=malloc(op*sizeof(int));
	for(i=0;i<op;i++){
		scanf("%d",&a[i]);
	}
	for(i=(op-1);i>=0;i--){
		printf("%d ",a[i]);
	}
	return 0;
}
