#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*head;
void linkedlisttraversal();
void inserting_at_mid(int pos);
void delete_the_last_node();
void createlinkedlist(int n);

int main()
{
    int n,pos;
    pos=n/2;
    printf("how many nodes do you want:");
    scanf("%d",&n);
    createlinkedlist(n);
    linkedlisttraversal();
    inserting_at_mid(pos);
    linkedlisttraversal();
    delete_the_last_node();
    printf("\n\nAfter deleting the last node\n");
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
void inserting_at_mid(int pos)
{
    int data,i,j,n;
    struct node *newnode,*curr;
    curr=head;
    for(i=1;i<pos-1;i++)
    {
        curr=curr->link;
    }
    printf("\nhow many nodes do you want to add :");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));

        newnode->link=curr->link;

        curr->link=newnode;

        printf("\nEnter the data of newnode %d :",j);

        scanf("%d",&data);

        newnode->data=data;
    }


}
void delete_the_last_node()
{
 struct node *curr,*next;
 curr=head;
 next=head->link;
 while(next->link!=NULL)
 {
     curr=curr->link;
     next=next->link;
 }
  curr->link=NULL;
  free(next);

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

