#include <stdio.h>
void creation(int arr[], int size) /* Adding elememts to DS for the first time 
										(When there are no elements) */
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
void traversal(int arr[], int size) /* Visiting / Processing all the elements 
										of the DS once and only once */
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int insertion(int arr[], int size, int pos, int item) /* Adding elements to the exixting
														data structure at any position */
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
int deletion(int arr[], int size, int pos) /* Removing elements from the existing 
											  data structure from any postion */
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
    printf("Your Data Structure is created: ");
    traversal(arr, size);
    printf("\n\nEnter Element to be insert                  : ");
    scanf("%d", &item);
    printf("Enter the position to insert the element    : ");
    scanf("%d", &pos);
    size = insertion(arr, size, pos, item);
    printf("After Insertion                             : ");
    traversal(arr, size);
    printf("\n\nEnter the postion for deletion of an element: ");
    scanf("%d", &del);
    size = deletion(arr, size, del);
    printf("After Deletion                              : ");
    traversal(arr, size);
}
