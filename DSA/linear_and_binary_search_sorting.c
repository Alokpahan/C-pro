#include <stdio.h>
void Linear_search(int arr[], int n, int item)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == item)
        {
            printf(" Search successful");
            break;
        }
    }
    if (i == n)
    {
        printf(" Search unsuccessful");
    }
}
void Sorting(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
}
void Traversal(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void main()
{
    int n, i;
    int item;
    printf(" Enter the size of Array: ");
    scanf(" %d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf(" Enter number %d: ", i + 1);
        scanf(" %d", &arr[i]);
    }
    printf(" Enter a number to search: ");
    scanf(" %d", &item);
    Linear_search(arr, n, item);
    printf("\n Array before Sorting: ");
    Traversal(arr, n);
    printf("\n Array after Sorting: ");
    Sorting(arr, n);
    Traversal(arr, n);
}
