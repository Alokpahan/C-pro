#include <stdio.h>
int top=0;

void push(int stack[], int item, int size)   //insertion - top end
{
if(top<size)
{
top++;
stack[top]=item;
}
else
printf("Stack is FULL...\n");
}
int pop(int stack[] )
{
int item=stack[top];

top--;

return item;
}

void creation(int stack[], int size)
{
    int el, pos = 0;
    while (pos < size)
    {
        printf("Enter an element %d: ", pos + 1);
        scanf("%d", &el);
        stack[pos] = el;
        pos++;
    }
}
void traversal(int stack[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", stack[i]);
        printf("\n");
}

int main()
{
int stack[15], size, item;
    printf("Enter the size of the DATA STRUCTURE (Max - 15): ");
    scanf("%d", &size);
    creation(stack, size);
    traversal(stack, size);
    printf("\nEnter Element to be insert: ");
    scanf("%d", &item);
    push(stack,size, item);
    printf("%d\n", pop(stack));
}
