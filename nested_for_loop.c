#include <stdio.h>

int main(){
	int i, j;
	for (i=0; i<11; i++){
		// printf("%d", i); // prints [1,2,3,4,6,7,8,9,10]
		for (j=i; j >= 0; j--){
			printf("%d", j);
		}
		printf("\n ");
	}
}
