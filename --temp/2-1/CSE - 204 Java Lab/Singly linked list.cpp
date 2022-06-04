#include<stdio.h>
struct Node
{
    int data;
    Node* link;
};

Node* start;
void insert (int x);
void insert_end (int x);
void insert_nth (int x, int y);
void search (int x);
void insert_end();
void del (int x);
void del_end ();

void print();
int main()
{
    start = NULL;
    int a,b,c,d;
    insert(1);
    insert_end(2);
    insert_end(3);
    insert_end(4);
    insert_end(5);
    printf("Press 1 to insert add the beginning /n press 2 to insert at end /n Press 3 to insert at any position \n Press 4 to search by position \n Press 5 to search end \n Press 6 to delete by position \n Press 7 to delete the end ");


scanf("%d",&a);
if (a==1)
{
    scanf("%d",&b);
    insert(b);
    print();
}

else if (a==2)
{
    scanf("%d",&b);
    insert_end(b);
    print();
}

else if (a==3)
{
    scanf("%d",&b);
    scanf("%d",&c);
    insert_nth(b,c);
    print();
}

else if (a==4)
{
    scanf("%d",&b);
    search(b);
}
else if (a==5)
{
    search_end();
}
else if (a==6)
{
    scanf("%d",&b);
    del(b);
    print();
}
else if (a==7)
{
    del_end(b);
    print();
}
return 0;
}

void insert(int x)

{
    Node* temp = new Node();
    temp->data = x;
    temp->link = start;
    start = temp;
}
void insert_end(int x)
{
    if(start == NULL)
    {
        Node* temp = new Node();
        temp->data = x;
        temp->link = start;
        start = temp;
    }
    else
    {
        Node* temp1 = new Node();
        temp1->data = x;
        temp1->link = NULL;
        Node* temp = start;
        while(temp->link!=NULL)
        {
            temp = temp->link;
        }
        temp->link = temp1;
    }
    }

    void insert_nth(int x. int y)
    {
        if(x == 1 )
        {
            Node* temp = new Node();
            temp->data = y;
            temp->link=NULL;
            Node*temp =start;
            for(int i=0;i<x-2; i++)
            {
                temp = temp->link;
            }
            Node*temp2=temp->link;
            temp->link = temp1;
            temp1->link = temp2;
        }
    }
    void search(int x){
    Node* temp = start;
    for(int i=0; i<x-1; i++)
    {
        temp=temp->link;
    }
    printf("%d",temp->data);
    }

void search(int x){
    Node* temp = start;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    printf("%d",temp->data);
    }

void del_end()
{
    Node* temp = start;
    Node* temp1;
    while(temp->link!=NULL)
    {
        temp1 = temp;
        temp = temp->link;
    }
    temp1->link=NULL;
    delete temp;
    }
void del(int x)
{
    if(x==1)
    {
        Node* temp = start;
        start = temp->link;
        delete temp;
    }
    else
    {
        Node* temp=start;
        for(int i=0; i<x-2; i++)
        {
            temp = temp->link
        }
        Node* temp2=temp->link;
        temp->link=temp2->link;
        delete temp2;
    }
}

void print()
{
    struct Node* temp = start;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->link;
    }
}


