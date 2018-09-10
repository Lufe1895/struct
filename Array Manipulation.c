#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int n,m;
	int a,b,c; 
	scanf("%d %d", &n, &m);
	long *arreglo, sum = 0, valor = -1;
	arreglo = (long*)malloc(sizeof(long)*10000000);
	memset(arreglo, 0, n);
	
	for (int i = 0; i < m; i++)
	{
		scanf("%i %i %i", &a, &b, &c);
		arreglo[a-1] += c; 
		arreglo[b] -= c;
	}
	
	for (int i = 0; i < n; i++)
	{
		sum += arreglo[i]; 
		if (sum > valor){
			valor = sum;
		}	
	}
	free(arreglo);
	printf("%ld\n", valor);
	return 0;
}
