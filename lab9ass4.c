#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*head;
void linkedlisttraversal();
void delete_at_the_nth(int pos);
void finding_the_given_value();
void createlinkedlist(int n);

int main()
{
    int n,pos;
    pos=n-1;
    printf("how many nodes do you want:");
    scanf("%d",&n);
    createlinkedlist(n);
    linkedlisttraversal();

    finding_the_given_value();
    linkedlisttraversal();

    printf("\nafter deleting N-1th position node\n");
    delete_at_the_nth(pos);
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
void delete_at_the_nth(int pos)
{

    int i;
    struct node *curr, *next;
    curr=head;
    next=head->link;
    for(i=1;i<pos-1;i++)
    {
        curr=curr->link;
        next=next->link;
    }
    curr->link=next->link;//linking with the next element before deletion
    free(next);

    getchar();
}
void finding_the_given_value()
{
    struct node *curr,*next,*newnode;
    int value,data;
    curr=head;
    next=head->link;
    printf("\nEnter the value you want to find :");
    scanf("%d",&value);
    while(next->data!=value && next->link!=NULL)
    {
        curr=curr->link;
        next=next->link;
    }
    if(next->data==value)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data of that newnode :");
        scanf("%d",&data);
        newnode->data=data;
        curr->link=newnode;
        newnode->link=next->link;
        free(next);
    }
}
void linkedlisttraversal()
{
    int count=0;
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("   %d   ",temp->data);
        temp=temp->link;
        count++;

    }
     printf("--->number of node is : %d",count);
     getchar();
}
