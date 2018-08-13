#include <stdio.h>

struct num{
	int num;
}dato[5];

int main(int argc, char *argv[]) {
	int i,j,aux;
	for(i=0;i<5;i++){
		printf("Dame el %i° número:\n",i+1);
		scanf("%d",&dato[i].num);
		printf("\n");
	}
	for(i=0;i<5;i++){
		aux=dato[i].num;
		for(j=i+1;j<5;j++){
			if(aux>dato[j].num){
				printf("\nLos números no están ordenados");
				i=20;
				j=10;
			}
		}
	}
	if(i<20){
		printf("\nLos números sí están ordenados\n");
	}
	return 0;
}
