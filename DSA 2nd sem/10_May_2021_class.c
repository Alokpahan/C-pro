// Array data Structure
//Creation : New data structure (DS) is created by adding elements
//Traversal : Visiting / Processing all the elements of the DS once and only once
//Insertion : Adding element/s to an existing DS
//Deletion : Removing element/s from an existing DS

#include <stdio.h>
void creation(int arr[], int size)
{
    int el, pos = 0;
    while (pos < size)
    {
        printf("Enter an element %d: ", pos + 1);
        scanf("%d", &el);
        arr[pos] = el;
        pos++;
    }
}
void traversal(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int insertion(int arr[], int size, int pos, int item)
{
    int i;
    for (i = size - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = item;
    size++;
    return size;
}
int deletion(int arr[], int size, int pos)
{
    int i;

    for (i = pos; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;
    return size;
}

void main()
{
    int arr[15], size, item, pos, del;
    printf("Enter the size of the DATA STRUCTURE (Max - 15): ");
    scanf("%d", &size);
    creation(arr, size);
    traversal(arr, size);
    printf("\nEnter Element to be insert: ");
    scanf("%d", &item);
    printf("\nEnter the position to insert the element: ");
    scanf("%d", &pos);
    size = insertion(arr, size, pos, item);
    traversal(arr, size);
    printf("\nEnter the postion for deletion of an element: ");
    scanf("%d", &del);
    size = deletion(arr, size, del);
    traversal(arr, size);
}
