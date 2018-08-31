#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,b,c=0,i;
	scanf("%d %d",&a,&b);
	int *d=malloc(a*sizeof(int));
	for(i=0;i<a;i++){
		scanf("%d",&d[i]);
		if(d[i]==b){
			c++;
		}
	}
	printf("%d",c);
	return 0;
}