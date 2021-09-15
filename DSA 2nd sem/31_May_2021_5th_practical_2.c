// post fix exp.---------------------> 23 32 +
// we can also write it as ----------> 23,32,-
// 4,5,6,+,*
//4,5,6
// 5 + 6 = 11
//4,11
//4 * 11 = 44
//44

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
    int item;
                                        //stack underflow
    item = stack[top];
    top--;
    return item;
}
void main()
{
    //int opd1, opd2;
    //int item_1, item_2;
    //char opr; // '+','-','*','/','%'   <----- character constant
    char postfix[25]="456+-"; // 4,5,6   <----- 2nd Version H.W 
                              // 5 + 6  = 11
                              // 4,11
                              // 4 - 11 = -7
    printf("Enter postfix expression (Ex opd1,opd2,opr): ");
    scanf("%d,%d,%c", &opd1, &opd2, &opr);
    printf("\nPostfix: %d %d %c\n", opd1, opd2, opr);
    push(opd1);
    push(opd2);
    item_2 = pop();
    item_1 = pop();
    switch (opr)
    {
    case '+':
        printf("Result = %d", item_1 + item_2);
        break;
    case '-':
        printf("Result = %d", item_1 - item_2);
        break;
    case '*':
        printf("Result = %d", item_1 * item_2);
        break;
    case '/':
        printf("Result = %.2sf", (float)item_1 / item_2);
        break;
    case '%':
        printf("Result = %d", item_1 % item_2);
        break;
    default:
        printf("INVALID ARTHMETIC OPERATOR !");
    }
}