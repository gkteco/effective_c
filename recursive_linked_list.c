#include<stdio.h>
#include<stdlib.h>


struct Node {
	int data;
	struct Node* link;
};

struct Node* Insert(struct Node* head, int data){
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	node -> data = data;
	node -> link = NULL;
	if(head == NULL) head = node;
	else {
		struct Node* temp = head;
		while (temp -> link != NULL) {
			temp = temp -> link;
		}
		temp -> link = node;
	}
	return head;
}
void Print(struct Node* head){
	struct Node* node = head;
	while (node != NULL){
		printf("%d ", node -> data);
		node = node -> link;
	}
}

void ReversePrint(struct Node* head){
	if (head == NULL) return;
	ReversePrint(head -> link);
	printf("%d ", head -> data);
}

int main(){
	struct Node* head = NULL;
	head = Insert(head, 3); //(node, data) 
	head = Insert(head, 4);
	head = Insert(head, 5);
	Print(head);
	printf("\n");
	ReversePrint(head);
}
