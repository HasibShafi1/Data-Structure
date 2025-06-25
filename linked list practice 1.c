#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;

};
//this is a new way to initiate
struct node *head=NULL,*mid=NULL,*tail=NULL;

// traversal with void type 2
void print()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->link;
    }

}


int main()
{


    head=(struct node*)malloc(sizeof(struct node));
    mid=(struct node*)malloc(sizeof(struct node));
    tail=(struct node*)malloc(sizeof(struct node));

    head->data=4;
    mid->data=7;
    tail->data=6;


    head->link=mid;
    mid->link=tail;
    tail->link=head;

    linkedlisttraversal(head);

   print();

    getch();

    return 0;
    getch();

}

// traversal with void type 2
void linkedlisttraversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);

        ptr=ptr->link;
        printf("\t");

    }
}


