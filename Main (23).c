#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char txt[10000];
	int ini,fin,i,d=0;
	for(i=0;i<10000;i++){
		txt[i]='-';
	}
	scanf("%d %d",&ini,&fin);
	fflush(stdin);
	scanf("%[^\n]",&txt[0]);
	for(i=0;i<10000;i++){
		if(txt[i]!='-'){
			d++;
		}
	}
	d=d-1;
	for(i=0;i<d;i++){
		if(i==ini){
			for(i=fin;i>=ini;i--){
				printf("%c",txt[i]);
			}
			i=fin+1;
		}
		printf("%c",txt[i]);
	}
	return 0;
}