#include<stdio.h>
#include<stdlib.h>

struct Node{
int n;
float m;
char o;
char u[10];
struct Node *p;
};

void main(){
struct Node *head=(struct Node *)malloc(sizeof(struct Node));
struct Node *mid=(struct Node *)malloc(sizeof(struct Node));
struct Node *tail=(struct Node *)malloc(sizeof(struct Node));
struct Node *forearm=(struct Node *)malloc(sizeof(struct Node));
struct Node *leg=(struct Node *)malloc(sizeof(struct Node));
struct Node *nose=(struct Node *)malloc(sizeof(struct Node));


head->n=8;
head->m=6.5;
head->o='A';


mid->n=6;
mid->m=4.5;
mid->o='B';

tail->n=4;
tail->m=mid->n;
tail->o='C';

forearm->n=4;
forearm->m=3.5;
forearm->o='e';

leg->n=7;
leg->m=9.5;
leg->o='m';

nose->n=3;
nose->m=2.5;
nose->o='v';

head->p=mid;
mid->p=tail;
tail->p=forearm;
forearm->p=leg;
leg->p=nose;
nose->p=NULL;

printf("\n\n");
printf("----------        ----------        ----------        ----------        ----------        ----------");
printf("\n");

while(head!=NULL)
{

    printf("|%d",head->n);
    printf("|%.2f",head->m);
    printf("|%c|------->",head->o);
    head=head->p;
}
printf("NULL");
printf("\n----------        ----------        ----------        ----------        ----------        ----------");
printf("\n");
getch();
}

