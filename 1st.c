#include <stdio.h>
int main()
{
    int i = 0, a[10];
    while (i < 10)
    {
        printf("Element %d : ", i);
        scanf("%d", &a[i]);
        i++;
    }
    printf("Elements in an array are: ");
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
}