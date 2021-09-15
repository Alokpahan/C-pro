#include <stdio.h>
#include <conio.h>
int insertion(int Arr[], int N, int EnE, int Item, int pos)
{
    int i;
    if (EnE < N - 1)
    {
        for (i = EnE; i >= pos; i--)
            Arr[i + 1] = Arr[i];
        Arr[pos] = Item;
        EnE = EnE + 1;
    }
    else
        printf("No place to add item");
    return EnE;
}
int main()
{
    int arr[10] = {4, 5, 2, 3, 9, 6}, EnE = 6, i;
    printf("Array before insertion \n");
    for (i = 0; i < EnE; i++)
        printf("%d ", arr[i]);
    EnE = insertion(arr, 10, EnE, 7, 3 - 1);
    printf("\nArray after insertion \n");
    for (i = 0; i < EnE; i++)
        printf("%d ", arr[i]);
    return 0;
}
