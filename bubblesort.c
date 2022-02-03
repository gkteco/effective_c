#include <stdio.h>


//void flag(int *ass, int *des){
//	int s = scanf("%d",s);
//	if (s < 0){
//		int temp = *ass;
//		*ass = *des;
//		*des = temp;
//	}
//}

int flag(int *ass, int *des){
	int s = 1;
	if (s > 0){
		*ass = *ass;
		*des = *des;
	}
	else {
		int temp = *ass;
		*ass = *des;
		*des = temp;

	}
	return 0;

}


int compare(int a, int b){
	int assend = -1;
	int descend = 1;
	flag(&assend, &descend);
	if (a < b) return assend;
	return descend;
}



void BubbleSort(int A[], int n, int (*compare)(int, int)){
	int i, j, temp;
	for(i=0; i < n; i++){
		for (j=0; j < n-1; j++){
			if(compare(A[j], A[j+1]) > 0){
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
}




int main(){
	int i, n;
	int A[] = {2,5,4,3,6,1};
	n = sizeof(A)/sizeof(A[0]);
	BubbleSort(A, n, compare);
	for (i = 0; i < n; i++){
		printf("%d", A[i]);
	}

}
