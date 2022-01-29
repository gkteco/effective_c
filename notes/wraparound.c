#include <stdio.h>
int main(void){
	unsigned int ui = 4294967295;
	ui++;
	printf("ui = %u\n", ui);
	ui--;
	printf("ui = %u\n", ui);
}


