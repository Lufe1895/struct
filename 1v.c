#include <stdio.h>

struct num{
	int num;
}dato[5];

int main(int argc, char *argv[]) {
	int i,j,aux;
	for(i=0;i<5;i++){
		printf("Dame el %i� n�mero:\n",i+1);
		scanf("%d",&dato[i].num);
		printf("\n");
	}
	printf("�Qu� n�mero deseas saber si existe en la estructura?\n");
	scanf("%d",&aux);
	for(j=0;j<10;j++){
		if(dato[j].num==aux){
			printf("\nEl n�mero s� existe.");
			j=20;
		}
	}
	if(j<20)
		printf("\nEl n�mero no existe");
	return 0;
}

