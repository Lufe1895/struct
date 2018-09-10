#include <stdio.h>
#include <stdlib.h>

int elevar(int a,int b) { return (a^b); }

int main(int argc, char *argv[]) { 
	
int ** mb;
int la=0,base,altura; 
int *mbr;

scanf("%d %d\n",&base,&altura);
mb=(int **)malloc(base*sizeof(int *));

mbr=(int *)malloc(base*sizeof(int));

for(int i=0;i<base;i++)
{
	mb[i]=(int *)malloc(base*sizeof(int));
	mbr[i]=0;
}

while(altura--)
{
	int a,b,c;
	scanf("%d %d %d\n",&a,&b,&c);
	
	if(a==1)
	{
		int j;
		j=(elevar(b,la)%base);
		mb[j][mbr[j]] = c;
		++(mbr[j]);
	}
	
	
	else if(a==2)
	{
		int j;
		j=(elevar(b,la)%base);
		int k=mbr[j];
		int l = c%k;
		la = mb[j][l];
		printf("%d\n",la);
	}
	
	
}  
return 0;
}

