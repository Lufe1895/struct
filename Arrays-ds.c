#include <stdio.h>

int main(int argc, char *argv[]) {
	int nv;
	scanf("%d",&nv);
	int v[nv];
	for(int i=0;i<nv;i++){
		scanf("%d",&v[i]);
	}
	for(int i=nv-1;i>=0;i--){
		printf("%d ",v[i]);
	}    
}
