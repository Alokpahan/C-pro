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
    int arr[10] = {13, 4, 16, 81, 2, 6, 31, 43, 52, 1};
    struct Tnode *Root, *New, *Temp, *PTemp;
    int i;
	Root = NULL; 
    for (i = 0; i < 10; i++)
    {
        printf("\n Insertion:(%d) ", arr[i]);
        New = (struct Tnode *)malloc(sizeof(struct Tnode));
        New->data = arr[i];
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
    printf("\n Inorder traversal  :");
    inorder(Root);
    printf("\n Perorder traversal :");
    preorder(Root);
    printf("\n Postorder traversal:");
    postorder(Root);
}
