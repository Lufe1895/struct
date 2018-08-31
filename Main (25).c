#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,i,con1=0,con2=0;
	char *c;
	scanf("%d",&a);
	c=(char*)malloc(a*sizeof(char));
	fflush(stdin);
	scanf("%[^\n]",&c[0]);
	if(c[0]=='B'){
		for(i=0;i<a;i+=2){
			if(c[i]!='B'){
				con1++;
			}
		}
		for(i=1;i<a;i+=2){
			if(c[i]!='W'){
				con2++;
			}
		}
	}
	else{
		for(i=0;i<a;i+=2){
			if(c[i]!='W'){
				con1++;
			}
		}
		for(i=1;i<a;i+=2){
			if(c[i]!='B'){
				con2++;
			}
		}
	}
	printf("%d",con1+con2);
	
	return 0;
}