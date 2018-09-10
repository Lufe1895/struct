#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
int a,b,c;
int *arreglo=(int *)malloc(sizeof(int));
scanf("%d" "%d", &a,&b);	
for(int i = 0; i < a; i++){
	c=i-b;
	if(c<0){
		c+=a;
	}
	scanf("%d", &arreglo[c]);
}	
for(int i = 0; i < a; i++){
	printf("%d ", arreglo[i]);
}
	
	return 0;
}
