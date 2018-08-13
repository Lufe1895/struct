#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n,i,sum=0;
	scanf("%d",&n);
	int *arr=malloc(n * sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("%d",sum);
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */    
	return 0;
}
