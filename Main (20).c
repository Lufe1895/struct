#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,b,i,j;
	scanf("%d",&a);
	int *c=malloc(a*sizeof(int));
	for(i=0;i<a;i++){
		scanf("%d",&c[i]);
	}
	scanf("%d",&b);
	int *d=malloc(b*sizeof(int));
	for(i=0;i<b;i++){
		scanf("%d",&d[i]);
	}
	for(i=0;i<b;i++){
		for(j=0;j<a;j++){
			if(d[i]==c[j]){
				d[i]=j+1;
				i=i+1;
				j=0;
			}
			else{
				d[i]=0;
			}
		}
	}
	for(i=0;i<b;i++)
		printf("%d ",d[i]);
	free(d);
	free(c);
	return 0;
}