#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*head;

void linkedlisttraversal();
void createlinkedlist();
void inserting_at_end();
void inserting_at_nth();
void inserting_at_begining();
void delete_at_first();
void delete_at_the_nth();
void delete_the_last_node();
void deleting_the_given_value();


void main()
{
    int n;
    printf("Enter how many nodes you want : ");
    scanf("%d",&n);

    createlinkedlist(n);

    linkedlisttraversal();

    inserting_at_end();

//linkedlisttraversal();

 //  inserting_at_nth();
    //inserting_at_begining();

    //linkedlisttraversal();

   // delete_at_first();

   // printf("\nlinked list after delteing the first node\n");
    //delete_at_the_nth();

    // printf("\nlinked list after deletion\n");

    linkedlisttraversal();

    //delete_the_last_node();

    deleting_the_given_value();

    printf("\nlinked list after deletion\n");

    linkedlisttraversal();


    getchar();
   // return 0;

}

// function for creating a linked list from user
void createlinkedlist(int n)
{
    struct node *newnode,*temp;
    int data,i;

    head=(struct node*)malloc(sizeof(struct node));
    printf("enter the data of first node:");
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

//function for inserting at the end of the linked list from user input

void inserting_at_end()
{   int data,n;
    printf("\nhow many new nodes you want to add in the end :");
    scanf("%d",&n);
    struct node *newnode,*temp;
    temp=head;
    for(int i=1;i<=n;i++)
    {
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        
        newnode=(struct node*)malloc(sizeof(struct node));
        temp->link=newnode;
        newnode->link=NULL;


        printf("enter the data :");
        scanf("%d",&data);

        newnode->data =data;
    }
}

//funciton for inserting multiple nodes at nth postition

void inserting_at_nth()
{
    int data,pos,i,j,n;
    struct node *newnode,*curr;

    printf("\nin which position you want to insert new nodes :\n");
    scanf("%d",&pos);
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

//function for inserting multiple nodes at first
void inserting_at_begining()
{
    struct node *newnode;
    int data , i, n;
    printf("\nHow many nodes you want to add at first :");
    scanf("%d",&n);
    for (i=1;i<=n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->link =head;
        printf("ENter the data of newnode %d :",i);
        scanf("%d",&data);
        newnode->data=data;
        head=newnode;
    }

}

//function for deleting a node from the head
void delete_at_first()
{
    struct node *temp;
        temp=head;

    head=head->link;

    free(temp);
}


void delete_at_the_nth()
{

    int pos,i;
    struct node *curr, *next;
    curr=head;
    next=head->link;
    printf("enter the position :");
    scanf("%d",&pos);
    for(i=1;i<pos-1;i++)
    {
        curr=curr->link;
        next=next->link;
    }
    curr->link=next->link;//linking with the next element before deletion
    free(next);

    getchar();
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

void deleting_the_given_value()
{
    struct node *curr,*next;
    int value;
    curr=head;
    next=head->link;
    printf("\nEnter the value you want to delete :");
    scanf("%d",&value);
    while(next->data!=value && next->link!=NULL)
    {
        curr=curr->link;
        next=next->link;
    }
    if(next->data==value)
    {
        curr->link=next->link;
        free(next);
    }
}



//function for linked list traversal
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

