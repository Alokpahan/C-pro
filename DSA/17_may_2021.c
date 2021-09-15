#include <stdio.h>
void creation(int arr[], int size)
{
    int num, pos = 0;
    while (pos < size)
    {
        printf("Enter an element %d: ", pos + 1);
        scanf("%d", &num);
        arr[pos] = num;
        pos++;
    }
}
void traversal(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int deletion(int arr[], int size, int p)
{
    int i;
    if (p >= size)
    {
        printf("\nDeletion not possible !");
        printf("\nPlease Try again.......\n");
        return size;
    }
    else
    {

        for (i = p; i < size; i++) 
            arr[i] = arr[i + 1];
        size--;
        return size;
    }
}
int appendoperation(int arr[], int size, int item) /* To insert element at end/last 
															position only */
{
    arr[size++] = item;
    return size;
}
void main()
{
    int arr[15], size, pos, item;
    printf("Enter the size of the DATA STRUCTURE (Max - 15): ");
    scanf("%d", &size);
    creation(arr, size);
    printf("Your Data Structure is created: ");
    traversal(arr, size);
    printf("\nEnter position of the element to delete: ");
    scanf("%d", &pos);
    size = deletion(arr, size, pos);
    printf("\nAfter Deletion                    : ");
    traversal(arr, size);
    printf("Enter Element to be insert        : ");
    scanf("%d", &item);
    size = appendoperation(arr, size, item);
    printf("After Insertion (Append operation): ");
    traversal(arr, size);
}
