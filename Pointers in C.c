#include <stdio.h>

void update(int *a,int *b) {
	int aux,aux2;
	aux= *a;
	aux2= *b;
	*a = aux + aux2;
	*b = abs( aux - aux2 );
}

int main() {
	int a, b;
	int *pa = &a, *pb = &b;
	
	scanf("%d %d", &a, &b);
	update(pa, pb);
	printf("%d\n%d", a, b);
	
	return 0;
}
