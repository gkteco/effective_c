#include<stdio.h>
#include<stdlib.h>

struct BstNode{
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
	if(root == NULL){
		root = GetNewNode(data);
	}
	else if(data <= root -> data){
		root -> left = Insert(root -> left, data);

	}
	else {
		root -> right = Insert(root -> right, data);
	}
	return root;	
}

void DFSPreorder(struct BstNode* root){
	if (root == NULL) return;
	printf("%d ", root -> data);
	DFSPreorder(root -> left);
	DFSPreorder(root -> right);

}

void DFSInorder(struct BstNode* root){
	if(root == NULL) return;
	DFSInorder(root -> left);
	printf("%d ", root -> data);
	DFSInorder(root -> right);
}

void DFSPostorder(struct BstNode* root){
	if(root == NULL) return;
	DFSPostorder(root -> left);
	DFSPostorder(root -> right);
	printf("%d ", root -> data);
}

int main(){
	struct BstNode* root = NULL;
	root = Insert(root, 10); //(root, data)
	root = Insert(root, 9); //(root, data)
	root = Insert(root, 20); //(root, data)
	root = Insert(root, 40); //(root, data)
	root = Insert(root, 12); //(root, data)
	
	printf("Preorder:");
	printf("\n");
	DFSPreorder(root);
	printf("\n");


	printf("Inorder:");
	printf("\n");
	DFSInorder(root);
	printf("\n");


	printf("Postorder:");
	printf("\n");
	DFSPostorder(root);
	printf("\n");

}


