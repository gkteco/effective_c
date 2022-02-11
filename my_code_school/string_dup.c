#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>

struct Node {
	char data;
        struct Node* link;
};
struct Node* head;

void Insert(char data){
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	node -> data = data;
	node -> link = head;
	head = node;
}

void Traverse(){
	struct Node* node = head;
	while (node != NULL){
		struct Node *current_node, *prev_node, *next_node;
		prev_node = node;
		current_node = prev_node -> link;
		next_node = current_node -> link;
		if(prev_node -> data == current_node -> data){
			printf("found match");
			prev_node -> link = next_node;
			free(current_node);
			return;
		}
		node = node -> link;
	}
}

void Print(){
	struct Node* node = head;
	while(node != NULL){
		printf("%d ", node -> data);
		node = node -> link;
	}
}


int main(){
	head = NULL;
	char A[8] = {'a','a','c','d','e','f','g'};
	int n = sizeof(A) / sizeof(A[0]);
	for (char i=0; i < n; i++){
		Insert(A[i]);
	}
	Print();
	printf("\n");
	Traverse();
	printf("\n");
	Print();
	printf("\n");


}

