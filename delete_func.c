#include<stdio.h>
#include<stdlib.h>


struct Node {
	int data;
	struct Node* link;
};



struct Node* head; //global

void Delete(){
	struct Node* temp1 = head;
	printf("%d", temp1 -> link);
	for (int i=0; i< n-2; i++){
		temp1 = temp1 -> link;
	}
	struct Node* temp2 = temp1 -> link;
	temp1 -> link = temp2 -> link;
	free()

}



void Insert(int x){
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

	new_node -> data = x;
	new_node -> link = head;
	head = new_node;
}


int main(){
	head = NULL;
	Insert(2); // (x)
	Delete();
}
