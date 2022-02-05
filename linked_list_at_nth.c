#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* link;
};


struct Node* head;

void Insert(int data, int n){
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

	new_node -> data = data;
	new_node -> link = NULL;

	if (n == 1){
		new_node -> link = head;
		head = new_node;
		return;
	}
	struct Node* helper = head;
	for (int i=0; i< n-2; i++){
		helper = helper -> link;
	}
	new_node -> link = helper -> link;
	helper -> link = new_node;
}

void Print(){
	struct Node* node = head;
	while(node != NULL){
		printf("[data:%d, link: %d,  position:%d]", node -> data, node -> link, node);
		node = node -> link;
	}
	printf("\n");
}


int main(){
	head = NULL; //init to empty list
	Insert(3,1); //(data, n)
	Insert(6,1);
	Insert(2,2);
	Insert(4,3);
	Print();
}
