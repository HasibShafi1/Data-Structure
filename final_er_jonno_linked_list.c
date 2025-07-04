#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*head;

void create_linked_list();
void linked_list_traversal();
void deleting_nth_position();



int main()
{
    int n;

    printf("How many nodes you want ");

    scanf("%d",&n);
    create_linked_list(n);

    linked_list_traversal();

    deleting_nth_position();

    printf("after deletion");

    linked_list_traversal();

    getchar();

    return 0;
}



void create_linked_list(int n)
{
    int data,i;
    struct node *newnode,*temp;


    head=(struct node*)malloc(sizeof(struct node));

    printf("Enter the data of node 1 :");


    scanf("%d",&data);

    head->link=NULL;
    head->data=data;
    temp=head;

    for(i=2; i<=n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data of node %d :",i);

        scanf("%d",&data);

        newnode->data=data;

        temp->link=newnode;
        newnode->link=NULL;
        temp=newnode;
    }

}


void deleting_nth_position(){


    printf("\nenter the position :");
    int i,pos;

    scanf("%d",&pos);

    struct node *temp,*next;


    temp=head;
    next=head->link;

    for (i=1;i<pos-1;i++)
    {
        temp=temp->link;
        next=next->link;

    }
    temp->link=next->link;
    free(next);



}

void linked_list_traversal()
{
    struct node *temp;

    temp=head;

    printf("\n");
    printf("List is \n");
    while(temp!=NULL)
    {

        printf("%d--->",temp->data);

        temp=temp->link;
    }
    printf("NULL");

    getchar();

}
