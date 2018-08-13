#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int (*strcmp_func)(const char*, const char*);

int lexicographic_sort(const char* a, const char* b) {
	return strcmp(a,b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
	return -strcmp(a,b);
}

// simple O(n^2) set cardinality
int count_distinct(const char *str){
	int i=0, count=1;
	for(i=1; str[i]!='\0'; ++i){
		int k=i-1;
		while(k>=0 && str[k]!=str[i]){ --k; }
		if(k==-1){ ++count; }
	}
	return count;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
	int result=count_distinct(a)-count_distinct(b);
	return result ? result : strcmp(a,b);
}

int sort_by_length(const char* a, const char* b) {
	int result=strlen(a)-strlen(b);
	return result ? result : strcmp(a,b);
}

void string_sort(char** arr,const int len, strcmp_func cmp){
	int i=0, k=0;
	for(i=1; i<len; ++i){
		k=i;
		char *temp=arr[i];
		while(k>0 && cmp(arr[k-1],temp)>0){
			arr[k]=arr[k-1];
			--k;
		}
		arr[k]=temp;
	}
}

int main() 
{
	int n;
	scanf("%d", &n);
	
	char** arr;
	arr = (char**)malloc(n * sizeof(char*));
	
	for(int i = 0; i < n; i++){
		*(arr + i) = malloc(1024 * sizeof(char));
		scanf("%s", *(arr + i));
		*(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
	}
	
	string_sort(arr, n, lexicographic_sort);
	for(int i = 0; i < n; i++)
		printf("%s\n", arr[i]);
	printf("\n");
	
	string_sort(arr, n, lexicographic_sort_reverse);
	for(int i = 0; i < n; i++)
		printf("%s\n", arr[i]); 
	printf("\n");
	
	string_sort(arr, n, sort_by_length);
	for(int i = 0; i < n; i++)
		printf("%s\n", arr[i]);    
	printf("\n");
	
	string_sort(arr, n, sort_by_number_of_distinct_characters);
	for(int i = 0; i < n; i++)
		printf("%s\n", arr[i]); 
	printf("\n");
}
