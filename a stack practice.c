#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*top=NULL;

void push(int);
void pop();
void traversal();

int main()
{
    int choice, data;


    printf("Linked list type \n");


    while(1)
    {
        printf("\n****** MENU ******\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("Enter the element to be pushed :");
            scanf("%d",&data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            traversal();
            break;
        case 4:
            exit(0);

        default :
            printf("Erokom kono Choice tomar kache nai");
        }
    }
    getchar();
    return 0;
}


void push(int data)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Stack Overflow.");
        exit(1);
    }
    else
    {
        newnode->link=top;
        top=newnode;
        newnode->data=data;
    }
}


void pop()
{
   if(top == NULL)
      printf("\nStack is Empty!!!\n");
   else{
      struct node *temp = top;
      printf("\n to beDeleted element: %d", temp->data);
      top = temp->link;
      free(temp);
   }
}


void traversal()
{
    struct node *temp;
    temp=top;
    while(temp!=NULL)
    {
        printf("   %d   \n",temp->data);
        temp=temp->link;
    }
}

