#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*head;
void linkedlisttraversal();
void deleting_the_given_value();
void createlinkedlist(int n);

int main()
{
    int n;
    printf("how many nodes do you want:");
    scanf("%d",&n);
    createlinkedlist(n);
    linkedlisttraversal();
    deleting_the_given_value();
    linkedlisttraversal();

}
void createlinkedlist(int n)
{
    struct node *newnode,*temp;
    int data,i;

    head=(struct node*)malloc(sizeof(struct node));
    printf("enter the dara of first node:");
    scanf("%d",&data);
    head->data=data;
    head->link=NULL;
    temp=head;
    for(i=2; i<=n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data of node %d :",i);
        scanf("%d",&data);
        newnode->data=data;
        newnode->link=NULL;
        temp->link=newnode;
        temp=newnode;
    }

}

void deleting_the_given_value()
{
    struct node *curr,*next,*nex2,*newnode;
    int value,data;
    curr=head;
    next=head->link;
    nex2=next->link;
    printf("\nEnter the value you want to look for :");
    scanf("%d",&value);
    while(next->data!=value && next->link!=NULL)
    {
        curr=curr->link;
        next=next->link;
        nex2=nex2->link;

    }
    if(next->data==value)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data to add before %d :",value);
        scanf("%d",&data);
        newnode->data=data;
        newnode->link=next;

        curr->link=newnode;


        printf("data was deleted of the node which is located just after it and a new node was inserted just before it\n");
        if(next->link!=NULL)
        {
           next->link=nex2->link;
           free(nex2);
        }

    }
}
void linkedlisttraversal()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("   %d   ",temp->data);
        temp=temp->link;
    }
}
