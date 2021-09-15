#include <stdio.h>
#include <stdlib.h>
struct Node // self-referential structure / recursive defination of structure
{
	int data;
	struct Node *link;
};
struct Node *push(struct Node *top, int item)
{
	struct Node *New;
	New = (struct Node *)malloc(sizeof(struct Node));
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
struct Node *pop(struct Node *top)
{
	int item;
	if (top == NULL)
	{
		printf(" Stack is empty!\n");
	}
	else
	{
		printf(" %d\n", top->data);
		top = top->link;
	}
	return top;
}
void main()
{
	struct Node *top = NULL;
	int n, i, num;
	printf(" How many times do you want to push: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf(" Enter Number %d : ", i + 1);
		scanf("%d", &num);
		top = push(top, num);
	}
	printf(" How many times do you want to pop: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		top = pop(top);
	}
}
