#include<stdio.h>
#include<stdlib.h>



int swap(int *a, int *b){
	int j = *a;
	*a = *b;
	*b = j;
	return 0;
}






int main(){
	int a, b;
	a = 10;
	b = 1;
	swap(&a,&b);
	printf("a = %d, b = %d", a, b);
}
