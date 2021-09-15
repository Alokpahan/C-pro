#include <stdio.h>
#include <stdlib.h>
struct CNode
{
    int data;
    struct CNode *Link;
};
void main()
{
    struct CNode *Ptr = NULL, *New, *Temp;
    int num;
    do
    {
        printf("Enter a number, -1 to quit; ");
        scanf("%d", &num);
        if (num == -1)
            break;
        New = (struct CNode *)malloc(sizeof(struct CNode));
        New->data = num;
        if (Ptr == NULL)
        {
            Ptr = New;
            Ptr->Link = New;
        }
        else
        {
            Temp = Ptr;
            while (Temp->Link != Ptr)
                Temp = Temp->Link;
            Temp->Link = New;
            New->Link = Ptr;
            Temp = New;
        }
    } while (1);
    Temp = Ptr;
    while (Temp->Link != Ptr)
    {
        printf("%d -> ", Temp->data);
        Temp = Temp->Link;
    }
    printf("%d -> ", Temp->data);
}