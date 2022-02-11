#include<stdio.h>
#include<stdlib.h>

char* Traverse(char* c){
	char* arr = c;
	int i;
	char arrSize = sizeof(c) / sizeof(c[0]);
	for(i=0; i<arrSize; i++)
		if(c[i] == c[i+1]){
			arr[i] = c[i + 1];
		}
	return arr;
}


int main(){
	char c[] = {"hello"};
	printf("%s", Traverse(c));
}
