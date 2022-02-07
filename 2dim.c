include<stdio.h>

int main(){
	int B[2][3] = {1,2,3,4,5,6}; // 2dim array [1 2 3][4 5 6]
	int i;
	int A[6];
	for (i=0; i < *(*B + 2); i++){
		A[i] = *(*B + i);

	}
	for (i=2; i < *(*B + 5); i++){
		A[i] = *(*B + i);
	}


	printf("[%d,%d,%d]", A[0], A[1], A[2]);
	printf("\n");
	printf("[%d,%d,%d]", A[3], A[4], A[5]);
}
