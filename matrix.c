#include <stdio.h>
int add_one(int *a){
	*a = *a+1;
	return 0;
}




int arith(void){
	int a;
	a = 10;
	add_one(&a);
	printf("a = %d\n", a);
	return 0;
}

int swap(int *var, int *var1){
	int j;
	j = *var; 
	*var = *var1;
	*var1 = j;
	return 0;
}

int pass_to_swap(void){
	int a = 10;
	int b = 11;
	swap(&a, &b);
	printf("a = %d\n, b = %d\n", a, b);
	return 0;

}





int practice_2(void){
	int x = 5;
	int *p = &x;
	*p = 6;
	int **q = &p;
	int ***r = &q;
	printf("%d\n", *p); //prints 6
	printf("%d\n", *q); // prints the address 6
	printf("%d\n", *(*q)); // dereferences the address of 6 then dereferences again to get value
	printf("%d\n", *(*(*r))); // dereferences to pointer a pointer, deferefeences again to a 
	// address then dereferences again to a value. prints 6
	return 0;
}






int practice_1(void){
	int a = 1025; // variable declaration and assignment (single line)
	int *p;
	p = &a;
	printf("size of integer is %d\n", sizeof(int));
	printf("Address = %d, Value = %d\n", p, *p); // address is p dereference with *p to value
	char *p0;
	p0 = (char *)p; //typecasting with a char pointer
	printf("size of char is %d\n", sizeof(char));
	printf("Address = %d, Value = %d\n", p0, *p0); // address to char variable is p0 
	//dereference with *p0 to value
	return 0;
}


int pointer_arith(void){
	int a;
	int *p;
	p = &a; // pointer assignment (position to a)
	a = 15;
	*p = 12; // dereferencing the pointer to address and changes value at address
	printf("%d\n", p+1);
	printf("%d\n", a);
	printf("%d\n", *p);
	return 0;
}

int main(void){
	int a; // variable decleration
	int *p; // pointer variable
	p = &a;	// pointer to address of a
	a = 5; // variable assignment
	printf("%d\n", p); // variable p holds the memory of a
	printf("%d\n", *p); // prints the value of variable in memory
	*p = 12; // adjusting the value at address in memory where p is pointing
	printf("%d\n", *p);
	printf("next line is func\n");
	pointer_arith();

	printf("next line is func\n");
	practice_1();


	printf("next line is func\n");
	practice_2();


	printf("next line is func\n");
	pass_to_swap();

	printf("next line is func\n");

	arith();


}
