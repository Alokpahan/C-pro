#include <stdio.h>
//Write a recursive function to find the product of two numbers a and b
int myfun(int a, int b)
{
    if (b == 1)
        return a;
    else
        return myfun(a, b - 1) + a;
}
// myfun(8,5) --> 32 + 8 = 40
// myfun(8,4) --> 24 + 8 = 32
// myfun(8,3) --> 16 + 8 = 24
// myfun(8,2) --> 8 + 8  = 16
// myfun(8,1) --> 8

// myfun(13,3) --> 26 + 13  = 39
// myfun(13,2) --> 13 + 13  = 26
// myfun(13,1) --> 13
void main()
{
    printf("%d", myfun(13, 3));
}
