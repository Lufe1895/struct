#include <stdio.h>

int main(int argc, char *argv[]) {
	int n,i,c1=0,c2=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>c1){
			c1=a[i]-1;
		}
	}
	while(c2!=n){
		c2=0;
		c1++;
		for(i=0;i<n;i++){
			if(c1%a[i]==0){
				c2++;
			}
		}
	}
	printf("%d",c1);
	return 0;
}
