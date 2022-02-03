#include<stdio.h>
#include<math.h>


int sqrt_root(double *x){
	//scanf("%d", num);
	int zero = *x - *x;
        double new = zero / (2 * sqrt(*x));
       	*x = new + sqrt(*x);


	






}

void perfect_square_checker(double *x){
	float fvar;
	int ivar;
	fvar = *x;
	ivar = fvar;
	if (fvar == ivar){
		int a = *x;
	        int b = a * a;
		printf("The number %f is a perfect square", b);
	}
	else {
		int a = *x;
		int b = a * a;
		printf("The numer %f is NOT a perfect square", b);
	}
}


int main(){
	double x = 10;
	sqrt_root(&x);
	perfect_square_checker(&x);

	printf("%f", x);

}
