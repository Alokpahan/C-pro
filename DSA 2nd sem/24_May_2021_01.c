#include<stdio.h>
int top=0;
int stack[10]={5};



void push(int stack[], int item) //insertion - top end
{
if(top<9)
{
top++;
stack[top]=item;
}
else
printf("Stack is FULL...\n");
}



int pop()
{
int item=stack[top];

top--;

return item;
}
void main()
{
printf("%d\n",pop());
push(stack,17);
push(stack,21);push(stack,19);push(stack,117);
push(stack,190);push(stack,127);
printf("%d\n",pop());
}