#include <stdio.h>
#include <conio.h>
int fact(int a)
{
    int i, fact = 1;
    for (i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
void main()
{
    int n, r, npr;
    printf("Enter values of n and r : \n");
    scanf("%d%d", &n, &r);
    npr = fact(n) / fact(n - r);
    printf("The npr of %d and %d is %d", n, r, npr);
}