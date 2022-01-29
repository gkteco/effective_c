#include <stdio.h>



int SumOfArray(int A[], int size){
	int i, sum;
	for(i = 0; i < size; i++){
		sum += A[i];
	}
	return sum;
}


int Double(int *A, size){
	int i;
	for(i=0; i < size; i++){
		A[i] = 2*A[i];
	}
}






int main(){
	int i;
	int size, total;
	int A[] = {1,2,3,4,5};
	size = sizeof(A) / sizeof(A[0]);
	total = SumOfArray(A, size);
	printf("the size fo the elements are %d\n", total);

	Double(A, size);
	for(i=0; i < size; i++){
		printf("%d\n", A[i]);
	}
	int B[5];
	for(i=0; i < size; i++){
		B[i] = A[i];
	}


}
