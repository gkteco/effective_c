#include <stdio.h>
#include <stdlib.h>

int swap(int *pa, int *pb) {
	int t = *pa;
	*pa = *pb;
	*pb = t;
	return 0;
}

int main(void) {
	int a = 17;
	int b = 24;
	swap(&a, &b);
	printf("a=%d, b=%d", a, b);
	return 0;
}
