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
	for(i=0;i<5;i++){
		aux=dato[i].num;
		for(j=0;j<5;j++){
			if(i!=j){
				if(aux==dato[j].num){
					printf("\nS� existen n�meros repetidos");
					i=20;
				}
			}
		}
	}
	if(i<20)
		printf("\nNo existen n�meros repetidos");
	return 0;
}
