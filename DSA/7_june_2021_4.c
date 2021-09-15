#include <stdio.h> // recursive function to find the nth term in fibonacci series 
int fab(int a)
{
    if (a == 0)
        return 0;
    else if (a == 1)
        return 1;
    else
        return fab(a - 1) + fab(a - 2);
}
void main()
{
    int num;
    printf("Enter a numbers: ");
    scanf("%d", &num);
    printf("The %dth term in fibonacci series is %d ", num, fab(num));
}
