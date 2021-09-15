#include <stdio.h>
int fact(int n) // recursive function to find the factorial of a number
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
void main()
{
    int num;
    printf("Enter a numbers: ");
    scanf("%d", &num);
    printf("The factorial of %d is %d", num, fact(num));
}
