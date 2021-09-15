#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};
struct Node *front = NULL, *rear = NULL; // Global variables
void insertLQ(int item)
{
    struct Node *New; // Local variables
    New = (struct Node *)malloc(sizeof(struct Node));
    New->data = item;
    New->link = NULL;
    if (rear == NULL)
    {
        front = New;
        rear = New;
    }
    else
    {
        rear->link = New;
        rear = New;
    }
}
int deleteLQ()
{
    int item;
    struct Node *temp;
    if (front == NULL)
    {
        printf(" Linked Queue is empty ");
        return 0;
    }
    else
    {
        item = front->data;
        temp = front;
        front = front->link;
        free(temp);
    }
    return item;
}
void main()
{
    int n, i;
    int item;
    printf(" How many times do you want to insert in LQ: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf(" Enter number %d : ", i + 1);
        scanf("%d", &item);
        insertLQ(item);
    }
    printf(" How many times do you want to delete from LQ: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf(" %d\n", deleteLQ());
    }
}
