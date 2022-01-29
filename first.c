#include <stdio.h>
#include <stdlib.h>

int swap(int *pa, int *pb){
	int t;
	t = *pa;
	*pa = *pb;
	*pb = t;
	return 0;
}

int main(void){
	int a = 17;
	int b = 21;
	swap(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return 0;
}
