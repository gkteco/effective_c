#include <stdio.h>

int main(){
	char A[6] = "Hello";
	int i;
	for(i=0; i < sizeof(A); i++){
		printf("%c", A[i]);
	}

}
