/* Stack implementation - Linked based - in C
	Created by : ammar shahin
	Data : 3/9/2019                              */

#include <stdio.h>
#include <stdlib.h>


typedef struct stacknode{
	int entry;
	struct stacknode *next;
}StackNode;

typedef struct stack{   // Stack is just a pointer to the top
	StackNode *top;
	int size;
}Stack;

void createStack(Stack*);
StackNode* createNode();
void push(int,Stack*);
void pop(Stack*);
void display(Stack*);
void clearStack(Stack*);
int stackSize(Stack*);


int main(){
	
	int choice,d;
	Stack s;
	createStack(&s);
	
	
	while(1){
		/* Menu */
		printf("1. Push.\n");
		printf("2. Pop.\n");
		printf("3. Display.\n");
		printf("4. Size of the Stack.\n");
		printf("5. Clear the Stack.\n");
		printf("6. Exit.\n\n");

		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice){

			case 1:
				printf("Enter The element to push: ");
				scanf("%d",&d);
				push(d,&s);
				break;

			case 2:
				pop(&s);
				break;

			case 3:
				display(&s);
				break;

			case 4:
				d = stackSize(&s);
				printf("The stack size is %d bytes.. with %d elements",sizeof(StackNode)*d,d);
				break;

			case 5:
				clearStack(&s);
				break;

			case 6:
				exit(0);
				break;

			default:
				printf("NOT a valid choice");
		}
		printf("\n\n");
	}
	return 0;
}


void createStack(Stack* ps){
	ps->top = NULL;
	ps->size= 0;
}


StackNode* createNode(){
	return (StackNode*) malloc(sizeof(StackNode));
}

void push(int data,Stack* ps){
	StackNode* ptr = createNode();
	if(ptr != NULL){
		ptr->next = ps->top;
		ptr->entry = data;
		ps->top = ptr;
		ps->size++;
	}else if(ptr == NULL){
		printf("No enough memory !!! ");
	}
}

void pop(Stack* ps){
	StackNode* temp = ps->top;
	if(temp != NULL){
		printf("The element %d is erased\n",
		ps->top->entry);
		ps->top = ps->top->next;
		free(temp);
		ps->size--;
	}else if(temp == NULL){
		printf("Stack is empty !!! ");
	}
}

void display(Stack* ps){
	StackNode* temp = ps->top;
	printf("The Stack Content is: ");

	while(temp != NULL){
		printf("%d ",temp->entry);
		temp = temp->next;
	}
}

int stackSize(Stack* ps){
	return ps->size;
}

void clearStack(Stack* ps){
	StackNode* temp = ps->top;
	int r;

	printf("Sure You Want to Clear All content ? (0 or 1): ");
	scanf("%d",&r);
	if(r == 1){
		while(temp){
			temp = temp->next;
			free(ps->top);
			ps->top = temp;
		}
		ps->top = NULL;
		ps->size = 0;
	}
}
