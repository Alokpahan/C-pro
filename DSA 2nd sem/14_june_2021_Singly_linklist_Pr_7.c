#include <stdio.h>
#include <stdlib.h>
struct node // self-referential structure / recursive defination of structure
{
    char data; // C,O,M,P,U,T,E,R
    struct node *link;
};

// -----------------       -----------------
// | data  | link  | ----> | data  | link  |
// |       |       |       |       |       |
// -----------------       -----------------

void main()
{
    struct node *Start, *New, *Temp;
    Start = NULL;
    New = (struct node *)malloc(sizeof(struct node));
    New->data = 'C';
    New->link = NULL;

    Start = New;
    Temp = Start;

    New = (struct node *)malloc(sizeof(struct node));
    New->data = 'O';
    New->link = NULL;

    Temp->link = New;
    Temp = New;

    New = (struct node *)malloc(sizeof(struct node));
    New->data = 'M';
    New->link = NULL;

    Temp->link = New;
    Temp = New;

    New = (struct node *)malloc(sizeof(struct node));
    New->data = 'P';
    New->link = NULL;

    Temp->link = New;
    Temp = New;

    New = (struct node *)malloc(sizeof(struct node));
    New->data = 'U';
    New->link = NULL;

    Temp->link = New;
    Temp = New;

    New = (struct node *)malloc(sizeof(struct node));
    New->data = 'T';
    New->link = NULL;

    Temp->link = New;
    Temp = New;

    New = (struct node *)malloc(sizeof(struct node));
    New->data = 'E';
    New->link = NULL;

    Temp->link = New;
    Temp = New;

    New = (struct node *)malloc(sizeof(struct node));
    New->data = 'R';
    New->link = NULL;

    Temp->link = New;
    Temp = New;

    // linked List Creation Complete
    // Start =>C=>O=>M=>P=>U=>T=>E=>R
    // Temp=Start
    // Temp=> c=>

    // Traversal......
    Temp = Start;

    while (Temp != NULL)
    {
        printf("%c ", Temp->data);
        Temp = Temp->link;
    }
}