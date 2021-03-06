#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swapstr(char **a, char **b){
	static char temp[11]; 
	strcpy(temp, *a);
	strcpy(*a, *b);
	strcpy(*b, temp);
}

void revwords(char **first, char **last){
	while(first < last){
		swapstr(first++, last--);
	}
}

int next_permutation(const int n, char **s){
	char **last_word = s+(n-1), **p=last_word-1;
	while(p >= s){
		if(strcmp(p[0], p[1]) < 0){
			char **q = p+1;
			while(q!=last_word && strcmp(q[1], *p)>0){ ++q; }
			swapstr(p++, q);
			revwords(p, last_word);
			return 1;
		}else{ --p; }
	}
	return 0;
}
int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}
