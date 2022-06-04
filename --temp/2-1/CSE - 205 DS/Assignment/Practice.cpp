#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *myNewNode(int item)
{
    struct node* temp =(struct node*)malloc (sizeof(struct node));
    temp->data=item;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
};


struct node* dataInsert(struct node *node,int data)
{
    if(node==NULL)
    {
        return myNewNode(data);
    }
    if(data<node->data)
    {
        node->left=dataInsert(node->left,data);
    }
    else if(data>node->data)
    {
        node->right=dataInsert(node->right,data);
    }
    return node;
};


struct node* search(struct node*root,int data)
{
    if (root == NULL || root->data == data)
    {
        printf("%d\n",root->data);
        return root;
    }
    if (root->data< data)
    {
        printf("%d\n",root->data);
        return search(root->right, data);
    }
    printf("%d\n",root->data);
    return search(root->left, data);
};


int main()
{
    struct node *root= NULL;
    root=dataInsert(root,5);
    dataInsert(root,5);
    dataInsert(root,8);
    dataInsert(root,1);
    dataInsert(root,3);
    dataInsert(root,7);
    dataInsert(root,250);
    dataInsert(root,10);
    dataInsert(root,30);
    dataInsert(root,9);
    dataInsert(root,80);
    dataInsert(root,10);
    dataInsert(root,20);
    int x,n,y;
    while(1)
    {
        printf(" MAIN MENU\n");
        printf(" 1.Insert myNew node.\n");
        printf(" 2.Search myNewNode.\n");
        printf(" 3.Exit.\n");
        printf("\n Enter your choice: ");
        scanf(" %d",&n);

        switch(n)
        {
        case 1:
            printf("\n Enter the data value:");
            scanf(" %d",&y);
            dataInsert(root,y);
            break;
        case 2:
            printf("\n Enter the node data to search: ");
            scanf(" %d",&x);
            search(root,x);
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("\n You Entered Wrong Input! Try Again.");
            break;
        }

    }
    return 0;
}
