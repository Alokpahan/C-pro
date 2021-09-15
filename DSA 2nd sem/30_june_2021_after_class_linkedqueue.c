#include <stdio.h>
#include <stdlib.h>
struct Node // data type (only one)
{
    char data;
    struct Node *link;
};

struct Node *front = NULL, *rear = NULL; // Global variables
                                         // Total no. of variables; data,link,front, rare.
                                         // total no. of pointer variables--> three(*link,*front,*rear)
void insertLQ(char item)
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
char deleteLQ()
{
    char item;
    struct Node *temp;
    if (front == NULL)
    {
        printf("Linked Queue is empty...");
        return '#';
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

    insertLQ('C'); //FIFO
    insertLQ('O');
    insertLQ('M');
    insertLQ('P');
    insertLQ('U');
    insertLQ('T');
    insertLQ('E');
    insertLQ('R');
    printf("%c\n", deleteLQ());
    printf("%c\n", deleteLQ());
    printf("%c\n", deleteLQ());
    printf("%c\n", deleteLQ());
    printf("%c\n", deleteLQ());
    printf("%c\n", deleteLQ());
    printf("%c\n", deleteLQ());
    printf("%c\n", deleteLQ());
    printf("%c\n", deleteLQ());
    printf("%c\n", deleteLQ());
}
