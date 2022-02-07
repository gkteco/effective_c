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
void Print(){
	struct Node* node = head;
	while(node != NULL){
		printf("%d ", node -> data);
		node = node -> link;
	}
}
void Reverse(){
	struct Node *current, *prev, *next;
	current = head;
	prev = NULL;
	while (current != NULL){
		next = current -> link;
		current -> link = prev;
		prev = current;
		current = next;
	}
	head = prev;

}


int main(){
	head = NULL;
	for (int i=0;i<10;i++){
		Insert(i);
	}
	Print();
	printf("\n");
	Reverse();
	Print();
}






