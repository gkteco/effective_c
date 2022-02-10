#include <stdio.h>

#define VERSION 0
#define HELLO printf("Hello World! Version: %d", VERSION)

//debug macro
#ifndef DEBUG
#define DEBUG 0
#endif
//use gcc -D DEBUG <file>.c -o <target> to invooke this debug

//using variadic arguments
#define debug(...) \
	if (DEBUG) { \
		printf(__VA_ARGS__); \
	} \



int main(){
	HELLO;

	int a = 4;
	int b = 3;
	int c = a + b;
	printf("\n");
	debug("MAde it past math operation, c is %d", c);
	return 0;

}
