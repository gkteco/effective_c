#include <stdio.h>
#include<stdlib.h>


struct BstNode {
	int data;
	struct BstNode* left;
	struct BstNode* right;

};

struct BstNode* GetNewNode(int data){
	struct BstNode* NewNode = (struct BstNode*)malloc(sizeof(struct BstNode));
	NewNode -> data = data;
	NewNode -> left = NULL;
	NewNode -> right = NULL;
	return NewNode;

}

struct BstNode* Insert(struct BstNode* root, int data){
	if (root == NULL){
		root = GetNewNode(data);
	}
	else if(data <= root->data){
		root -> left = Insert(root->left, data);

	}
	else {
		root -> right = Insert(root->right, data);

	}
	return root;
}
int Search(struct BstNode* root, int data){
	if(root == NULL){
		printf("NULL node");
	}
	else if (root -> data == data){
		printf("found data, %d", data);
	}
	else if (data <= root -> data){
		Search(root -> left, data);
	}
	else {
		Search(root -> right, data);
	}
	return 0;
}


int main(){
	struct BstNode* root = NULL;
	root = Insert(root, 1);
	root = Insert(root, 10);
	root = Insert(root, 12);
	Search(root, 11);
}
