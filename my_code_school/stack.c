#include<stdio.h>
#include<stdlib.h>
#include<limits.h>


struct Stack {
	int top;
	unsigned capacity;
	int* array;
};

struct Stack* createStack(unsigned capacity){
	struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
	stack -> top = -1;
	stack -> capacity = capacity;
	stack -> array = (int*)malloc(stack -> capacity * sizeof(int));
	return stack;
}
int isFull(struct Stack* stack){
	return stack -> top == stack -> capacity - 1;
}
int isEmpty(struct Stack* stack){
	return stack -> top == -1;
}
void Push(struct Stack* stack, int item){
	if(isFull(stack)) {
		printf("stack FULL!");
		return;
	}
	stack -> array[++stack->top] = item;
	printf("pushed %d to stack \n", item);
}
int Pop(struct Stack* stack){
	if(isEmpty(stack)){
		printf("trying to pop empty stack");
	}
	return stack -> array[stack -> top--];

}
int Peek(struct Stack* stack) {
	if(isEmpty(stack)) return INT_MIN;
	return stack -> array[stack -> top];
}

int main(){
	struct Stack* stack = createStack(100);
	Push(stack, 10);
	Push(stack, 20);
	Push(stack, 30);
	Push(stack, 40);

	printf("top of stack: \n %d", Peek(stack));
	printf("\n");
	printf("Popped: %d\n", Pop(stack));
	printf("Popped: %d\n", Pop(stack));
	printf("Popped: %d\n", Pop(stack));
	printf("Popped: %d\n", Pop(stack));
	printf("Popped: %d\n", Pop(stack));









}
