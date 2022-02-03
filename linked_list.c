#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node* link;
};

struct Node* head;

void Insert(int x){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> data = x;
	temp -> link = head;
	head = temp;
}

void Print(){
	struct Node* temp = head;
	while (temp != NULL) {
		printf("%d", temp -> data);
		temp = temp -> link;
	}
}

int main(){
	head = NULL;
	printf("How many nums?");
	int x,n,i;
	scanf("%d", &n);
	for (i=0; i<n;i++){
		printf("Insert num");
		scanf("%d", &x);
		Insert(x);
		Print();
	}
}

