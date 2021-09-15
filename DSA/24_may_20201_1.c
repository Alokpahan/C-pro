#include <stdio.h>
int top = -1;
int stack[10];
void push(int stack[], int item) /* Restricted insertion operation
                                  (inserting an item at the top) */
{
    if (top < 9)
    {
        top++;
        stack[top] = item;
    }
    else
        printf("Stack is Full/Overflow\n");
}
int pop()                       /* Restricted deletion operation
                                (removing an item from the top) */
{
    int item;
    if (top != -1)
    {
        item = stack[top];

        top--;
        return item;
    }
    else
        printf("Stack is Empty/Underflow ");
    return -1;
}
void main()
{
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);
    push(stack, 50);
    push(stack, 60);
    push(stack, 70);
    push(stack, 80);
    push(stack, 90);
    push(stack, 100);
    push(stack, 110);
    push(stack, 120);
	printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
}
