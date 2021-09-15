// Program to create Linked Stack
// Top pointer , Push() and Pop()
#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node *link;
}; // --> Self reference structures

struct Node *push(struct Node *top, int item)
{
	struct Node *New;
	New = (struct Node *)malloc(sizeof(struct Node)); // dynamic memory allocation
	New->data = item;
	New->link = NULL;

	if (top == NULL)
	{
		top = New;
	}
	else
	{
		New->link = top;
		top = New;
	}
	return top;
}
struct Node *pop(struct Node *top) // Since we are using int data , so the returning type is int
{
	int item;
	if (top == NULL)
	{
		printf("Stack is empty.....\n");
	}
	else
	{
		printf("%d\n", top->data);
		top = top->link;
	}
	return top;
}
void main()
{
	struct Node *top = NULL;
	top = push(top, 5);
	top = push(top, 7);
	top = push(top, 6);
	top = push(top, 2);
	top = push(top, 9);
	top = push(top, 1);
	top = push(top, 0);
	top = push(top, 8);
	top = push(top, 3);
	top = push(top, 4);

	top = pop(top);
	top = pop(top);
	top = pop(top);
	top = pop(top);
	top = pop(top);
	top = pop(top);
	top = pop(top);
	top = pop(top);
	top = pop(top);
	top = pop(top);
	top = pop(top);
	top = pop(top);
}
