#include <stdio.h>

int main(void){
	signed int si = -25;
	signed int abs_si = ((si) < 0 ? -(si) : (si));
	printf("%d\n", abs_si);
}
