#include <stdio.h>
int stack[10], top = -1;
void push(int opd)
{
                                                    //stack overflow
    top++;
    stack[top] = opd;
}
int pop()
{
    int a;
                                                    //stack underflow
    a = stack[top];
    top--;
    return a;
}
void evalution(char opr, int item_1, int item_2)
{
    if (opr == '+')
        printf("Value of Expression = %d", item_1 + item_2);
	else if (opr == '-')
        printf("Value of Expression = %d", item_1 - item_2);
	else if (opr == '*')
        printf("Value of Expression = %d", item_1 * item_2);
	else if (opr == '/')
        printf("Value of Expression = %.2f", (float)item_1 / item_2);
	else if (opr == '%')
        printf("Value of Expression = %d", item_1 % item_2);
    else
        printf("INVALID ARTHMETIC OPERATOR !");
}
void main()
{
    int opd1, opd2, item_1, item_2;
    char opr;
    printf("Enter Postfix Expression (opd1,opd2,opr): ");
    scanf("%d,%d,%c", &opd1, &opd2, &opr);
    printf("\nPostfix Expression: %d %d %c\n", opd1, opd2, opr);
    push(opd1);
    push(opd2);
    item_2 = pop();
    item_1 = pop();
    evalution(opr, item_1, item_2);
    printf("\nPrefix Expression (opr,opd1,opd2): ");
    scanf("%c,%d,%d", &opr, &opd1, &opd2);
    printf("\nPrefix Expression: %c %d %d\n",opr, opd1, opd2);
    push(opd1);
    push(opd2);
    item_2 = pop();
    item_1 = pop();
    evalution(opr, item_1, item_2);
}

