#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node* link;
};
struct Node* head;

void Insert(int x){
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	node -> data = x;
	node -> link = head;
	head = node;
}

void Delete(int n){
	struct Node* node = head;
	if (n==1){
		head = node -> link;
		free(node);
		return;
	}
	for (int i=0; i<n-2;i++){
		node = node -> link; // n-1 node
	}
	struct Node* temp_vari = node -> link; // temp_vari hold nth node
	node -> link = temp_vari -> link; //node now points to n+1
	free(temp_vari);
}



void Print(){
	struct Node* node = head;
	while(node != NULL){
		printf("%d", node -> data);
		node = node -> link;
	}
	printf("\n");

}


int main(){
	head = NULL;
	Insert(3);
	Insert(7);
	Insert(5);
	Insert(2);
	Print();
	int n;
	printf("enter position");
	scanf("%d", &n);
	Delete(n);
	Print();
}
