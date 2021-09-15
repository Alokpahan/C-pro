// Create a binary search tree to store the element of the set {3,9,11,1,17,23,56,2,4,8,12}
// root always points the NULL in the beginning
#include <stdio.h>
#include <stdlib.h>
struct Tnode
{
    int data;
    struct Tnode *left;
    struct Tnode *right;
};
void inorder(struct Tnode *Root)
{
    if (Root != NULL)
    {
        inorder(Root->left);
        printf(" %d ", Root->data);
        inorder(Root->right);
    }
}
void preorder(struct Tnode *Root)
{
    if (Root != NULL)
    {
        printf(" %d ", Root->data);
        preorder(Root->left);
        preorder(Root->right);
    }
}
void postorder(struct Tnode *Root)
{
    if (Root != NULL)
    {
        postorder(Root->left);
        postorder(Root->right);
        printf(" %d ", Root->data);
    }
}
void main()
{
    int ar[10] = {13, 4, 16, 81, 2, 6, 31, 43, 52, 1};
    struct Tnode *Root, *New, *Temp, *PTemp;
    int i;

    Root = NULL; 
    for (i = 0; i < 10; i++)
    {
        printf("\nInsertion (%d) ", ar[i]);
        New = (struct Tnode *)malloc(sizeof(struct Tnode));
        New->data = ar[i];
        New->left = NULL;
        New->right = NULL;
        if (Root == NULL)
        {
            Root = New;
        }
        else
        {
            Temp = Root;
            while (Temp != NULL)
            {
                if (New->data > Temp->data)
                {
                    PTemp = Temp;
                    Temp = Temp->right;
                }
                else
                {
                    PTemp = Temp;
                    Temp = Temp->left;
                }
            }

            if (New->data > PTemp->data)
            {
                PTemp->right = New;
            }
            else
            {
                PTemp->left = New;
            }
        }
    }
    printf(" \nInorder traversal  :");
    inorder(Root);
    printf(" \nPerorder traversal :");
    preorder(Root);
    printf(" \nPostorder traversal:");
    postorder(Root);
}