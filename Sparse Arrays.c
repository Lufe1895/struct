#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,b,*con,max=100,i,j;
	char **pal,**bus;
	scanf("%i",&a);
	pal=(char**)malloc(a*sizeof(char*));
	for(i=0;i<a;i++){
		pal[i]=(char*)malloc(max*sizeof(char));
	}
	for(i=0;i<a;i++){
		fflush(stdin);
		gets(pal[i]);
	}
	scanf("%i",&b);
	bus=(char**)malloc(b*sizeof(char*));
	for(i=0;i<b;i++){
		bus[i]=(char*)malloc(max*sizeof(char));
	}
	con=(int*)malloc(b*sizeof(int));
	for(i=0;i<b;i++){
		con[i]=0;
	}
	for(i=0;i<b;i++){
		fflush(stdin);
		gets(bus[i]);
	}
	for(i=0;i<b;i++){
		for(j=0;j<a;j++){
			if(strcmp(pal[j],bus[i])==0){
				con[i]++;
			}
		}
	}
	for(i=0;i<b;i++){
		printf("\n%i",con[i]);
	}
	free(pal);
	free(bus);
	free(con);
	return 0;
}
