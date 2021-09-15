#include <stdio.h>
int bigof_2(int a, int b)
{
    int big;

    if (a > b)
        big = a;
    else
        big = b;

    return big;
}
int big_2(int a, int b)
{
    return a > b ? a : b;
}
int smallof_2(int a, int b)
{
    int small;

    if (a > b)
        small = b;
    else
        small = a;

    return small;
}
int small_2(int a, int b)
{
    return a < b ? a : b;
}
void main()
{
    printf("bigof_2  : %d\n", bigof_2(bigof_2(4, 5), bigof_2(67, 87)));
    printf("big_2    : %d\n", big_2(big_2(41, 55), big_2(66, 77)));
    printf("smallof_2: %d\n", smallof_2(smallof_2(14, 95), smallof_2(97, 80)));
    printf("small_2  : %d\n", small_2(small_2(10, 65), small_2(97, 82)));

    printf("bigof_3  : %d\n", bigof_2(bigof_2(4, 5), 33));
    printf("big_3    : %d\n", big_2(90, big_2(66, 77)));
    printf("smallof_3: %d\n", smallof_2(smallof_2(14, 95), 67));
    printf("small_3  : %d\n", small_2(45, small_2(97, 82)));
}