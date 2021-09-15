#include <stdio.h>
int product(int a, int b) // recursive function to find the product of two numbers a and b
{
    if (b == 1)
        return a;
    else
        return product(a, b - 1) + a;
}
void main()
{
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    printf("\nProduct of %d and %d = %d", a, b, product(a, b));    
}
