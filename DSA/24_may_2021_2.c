#include <stdio.h>
int top = -1;
int stack[20];
int num, rem;
void push(int stack[], int item) /* Restricted insertion operation
                                  (inserting an item at the top) */
{
    if (top < 19)
    {
		top++;
        stack[top] = item;
    }
    else
        printf("\nStack is Full/Overflow\n");
}
int pop() 						/* Restricted deletion operation
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
void decimal_to_binary(int num)  // Decimal to binary conversion
{
    while (num != 0)
    {
        rem = num % 2;
        num = num / 2;
        push(stack, rem);
    }
	while (top != -1)
    {
        printf("%d", pop());
    }
}
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    decimal_to_binary(num);
}
