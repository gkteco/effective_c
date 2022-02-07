#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* link;
};
struct Node* head;

void Insert(int x){
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node -> data = x;
	new_node -> link = head;
	head = new_node;
}

void Delete(int n){
	struct Node* node = head;
	if(n ==1){
		head = node -> link;
		free(node);
		return;
	}
	for (int i=0;i<n-2;i++){
		node = node -> link;
	}
	struct Node* helper = node -> link;
	node -> link = helper -> link;
	free(helper);
}

void Print(){
	struct Node* node = head;
	while (node != NULL){
		printf("%d", node -> data);
		node = node -> link;
	}


}
int main(){
	head = NULL;
	Insert(3);
	Insert(3);
	Print();
	int n;
	printf("enter position");
	scanf("%d", &n);
	Delete(n);
	Print();
}
