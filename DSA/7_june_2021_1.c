#include <stdio.h>
int power(int a, int b) // recursive function for "a" to the power "b"
{
    if (b == 0)
        return 1;
    else
        return power(a, b - 1) * a;
}
void main()
{
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    printf("\n%d raised to the power of %d = %d", a, b, power(a, b));
}
