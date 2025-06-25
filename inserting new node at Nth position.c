#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;

};

struct node *insertatindex(struct node *head,int data,int index)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p=head;
    int i=1;
    while(i!=index-1)
    {
        p=p->link;
        i++;
    }
    ptr->data=data;
    ptr->link=p->link;
    p->link=ptr;

    return head;


};

void linkedlisttraversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);

        ptr=ptr->link;
        printf("\t");

    }
}


int main()
{
    struct node *head=NULL,*mid=NULL,*tail=NULL;

    head=(struct node*)malloc(sizeof(struct node));
    mid=(struct node*)malloc(sizeof(struct node));
    tail=(struct node*)malloc(sizeof(struct node));

    head->data=4;
    mid->data=7;
    tail->data=6;


    head->link=mid;
    mid->link=tail;
    tail->link=NULL;


    head=insertatindex(head,56,2);
    linkedlisttraversal(head);

    getch();

    return 0;
    getch();

}

