#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n,con=0,rev,i;
	scanf("%i",&n);
	rev=n-1;
	int *a=malloc(n*sizeof(int));
	int *b=malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[rev]=a[i];
		rev=rev-1;
	}
	for(i=0;i<n;i++){
		if(a[i]==b[i])
			con++;
	}
	if(con==n)
		printf("SI");
	else
		printf("NO");
	free(a);
	free(b);
	return 0;
}