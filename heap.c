#include<stdio.h>

#include<stdlib.h>

int main(){
	int *p;
	p = (int*)malloc(sizeof(int)); // reserving space in heap of size int (4bytes)
	*p = 10;
	printf("Address = %d, value = %d", p, *p); 
	free(p);
}
