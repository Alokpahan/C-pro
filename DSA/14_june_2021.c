#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node // self-referential structure / recursive defination of structure
{
    char data;
    struct node *link;
};
struct node *Start, *New, *Temp;
char ch;
void linklist()
{
    Start = NULL;
    while (1)
    {
        ch = getche();
        if (ch == '#')
            break;
        New = (struct node *)malloc(sizeof(struct node));
        New->data = ch;
        New->link = NULL;
        if (Start == NULL)
        {
            Start = New;
            Temp = Start;
        }
        else
        {
            Temp->link = New;
            Temp = New;
        }
    }
}
void traversal()
{
    Temp = Start;
    while (Temp != NULL)
    {
        printf("%c ", Temp->data);
        Temp = Temp->link;
    }
}
void main()
{
    printf("Please Enter/Write something (when you finished then terminate it with '#'):  \n");
    linklist();
    printf("\nThe traversed linked list is:\n");
    traversal();
}