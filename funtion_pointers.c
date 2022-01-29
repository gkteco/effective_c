#include <stdio.h>

void A(void){
	printf("Hello World!");
}

void B(void (*ptr)()){
	ptr();
}


int main(){
	void (*p)() = A;
	B(p);
}
