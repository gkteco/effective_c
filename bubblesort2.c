#include <stdio.h>



int BubbleSort(int A[], n){
	int i,j,temp;
	for (i =0; i < n; i++)
		for (j = 0; j < n-1; j++){
			if (A[j] > A[j +1]){
				temp = A[j];
				A[j] = A[j+1];
				A[j + 1] = temp;
			}
		}
}




int main(){
	int i, A[] = {3,4,5,2,1,6};
  	int n = sizeof(A) / sizeof(A[0]);
	BubbleSort(A, n);
	for (i=0; i < n; i++){
		printf("%d", A[i]);
	}
}
