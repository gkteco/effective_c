#include<stdio.h>
#include<stdlib.h>





int SumArray(int* N){
	int sum;
	for(int i=0; i<10; i++)
		for(int j=0; j<i+1; j++){
		sum = N[i] + N[j];
		}
	return sum;
}


int main(){
	int N[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("%d", SumArray(N));
}
