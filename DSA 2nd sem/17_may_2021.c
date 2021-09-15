#include <stdio.h>
void traversal(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
        printf("\n");
}
int deletion(int arr[], int n, int p)
{
    int i;

    if (p >= n)
    {
        printf("\nDeletion not possible.....");
        return n;
    }
    else
    {

        for (i = p; i < n; i++) // p,p+1,p+2,p+3.........P+n-1
            arr[i] = arr[i + 1];
        n--;
        return n;
    }
}
int appendoperation(int arr[], int n, int item)
{
    //n++;
    //arr[n-1]=item;
    // or
    //arr[n]=item;
    //n++;
    // or

    arr[n++]=item;
    return n;
}
void main()
{
    int a[12] = {5, 7, 2, 3, 12, 56, 67, 23};
    int noe = 8;
    int pos;

    traversal(a, noe);
    printf("\nEnter position of the element to delete: ");
    scanf("%d", &pos);
    noe = deletion(a, noe, pos);
    traversal(a, noe);
    noe = appendoperation(a, noe, 108);
    traversal(a, noe);
    noe = appendoperation(a, noe, 109);
    traversal(a, noe);
    noe = appendoperation(a, noe, 110);
    traversal(a, noe);
    noe = appendoperation(a, noe, 111);
    traversal(a, noe);
}