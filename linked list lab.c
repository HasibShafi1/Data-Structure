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
struct Node *h=(struct Node *)malloc(sizeof(struct Node));
struct Node *m=(struct Node *)malloc(sizeof(struct Node));
struct Node *t=(struct Node *)malloc(sizeof(struct Node));
struct Node *f=(struct Node *)malloc(sizeof(struct Node));



h->n=8;
h->m=6.5;
h->o='A';


m->n=6;
m->m=4.5;
m->o='B';

t->n=4;
t->m=7.7;
t->o='C';

f->n=4;
f->m=3.5;
f->o='e';


h->p=m;
m->p=t;
t->p=f;
f->p=NULL;


printf("\n\n");
printf("----------        ----------        ----------        ----------");
printf("\n");

while(h!=NULL)
{

    printf("|%d",h->n);
    printf("|%.2f",h->m);
    printf("|%c|------->",h->o);
    h=h->p;
}
printf("NULL");
printf("\n----------        ----------        ----------        ----------");
printf("\n");
getch();
}

