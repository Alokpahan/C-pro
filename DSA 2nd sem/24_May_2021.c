// Inertion and Deletion operation in a DS(Array)
// Restrict the insertion and deletion operation to only one end
// 5 6 7 1 3
// 0 1 2 3 4 5 6 7 8 9 |
#include <stdio.h>
int top = -1;
int stack[10] = {5};
void push(int stack[], int item) // insertion - top end
{
    if (top < 9)
    {
        top++; //global decleraton
        stack[top] = item;
    }
    else
        printf("Stack is Full......\n");
}
int pop()
{
    int item;

    if (top != -1)
    {
        item = stack[top];

        top--;
        return item;
    }
    else
        printf("Stack is EMPTY..");
        return -1;
}
void main()
{
   // printf("%d\n", pop());
    push(stack, 17);
    push(stack, 18);
    push(stack, 179);
    push(stack, 1);
    push(stack, 117);
    push(stack, 11);

    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
}