#include <stdio.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	int c,n,con=0,j,i,acu=0,can[2][30]={0},num,con2,arr[20]={0},con3=0;
	char op;
	scanf("%d %d",&c,&n);
	i=0;
	while(i<n){
		fflush(stdin);
		scanf("%c",&op);
		switch(op){
		case 'N':
			scanf("%i",&num);
			can[0][con]=1;
			can[1][con]=num;
			con++;
			break;
		case 'A':
			c=c-can[0][acu]-can[1][acu];
			can[0][acu]=0;
			acu++;
			break;
		case 'C':
			con2=0;
			for(j=0;j<30;j++){
				if(can[0][j]==1){
					con2++;
				}
			}
			arr[con3]=con2;
			con3++;
			break;
		case 'R':
			arr[con3]=c;
			con3++;
			break;
		default:
			break;
		}
		i++;
	}
	for(i=0;i<con3;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
