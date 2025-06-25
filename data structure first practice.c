#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Node
{
    float m;
    int n;
    char o;
    char p[100];

    struct Node *link;
};

void main()
{
    struct Node *a,*b,*c,*d,*e,*f;

    a=(struct Node *)malloc(sizeof(struct Node));
    b=(struct Node *)malloc(sizeof(struct Node));
    c=(struct Node *)malloc(sizeof(struct Node));
    d=(struct Node *)malloc(sizeof(struct Node));
    e=(struct Node *)malloc(sizeof(struct Node));
    f=(struct Node *)malloc(sizeof(struct Node));

    a->link=NULL;
    b->link=NULL;
    c->link=NULL;
    d->link=NULL;
    e->link=NULL;
    f->link=NULL;

    printf("Enter p for a node:");
    gets(a->p);
    printf("Enter o for a node:");
    scanf("%c",&a->o);
    printf("Enter m for a node:");
    scanf("%f",&a->m);
    printf("Enter n for a node:");
    scanf("%d",&a->n);

    printf("Enter p for b node:");
    gets(b->p);
    printf("Enter o for b node:");
    scanf("%c",&b->o);
    printf("Enter m for b node:");
    scanf("%f",&b->m);
    printf("Enter n for b node:");
    scanf("%d",&b->n);

    printf("Enter p for c node:");
    gets(c->p);
    printf("Enter o for c node:");
    scanf("%c",&c->o);
    printf("Enter m for c node:");
    scanf("%f",&c->m);
    printf("Enter n for c node:");
    scanf("%d",&c->n);

    printf("Enter p for d node:");
    gets(d->p);
    printf("Enter o for d node:");
    scanf("%c",&d->o);
    printf("Enter m for d node:");
    scanf("%f",&d->m);
    printf("Enter n for d node:");
    scanf("%d",&d->n);

    printf("Enter p for e node:");
    gets(e->p);
    printf("Enter o for e node:");
    scanf("%c",&e->o);
    printf("Enter m for e node:");
    scanf("%f",&e->m);
    printf("Enter n for e node:");
    scanf("%d",&e->n);

    printf("Enter p for f node:");
    gets(f->p);
    printf("Enter o for f node:");
    scanf("%c",&f->o);
    printf("Enter m for f node:");
    scanf("%f",&f->m);
    printf("Enter n for f node:");
    scanf("%d",&f->n);

    a->link=b;
    b->link=c;
    c->link=d;
    d->link=e;
    e->link=f;
    f->link=NULL;
    printf("\n");

    while(a!=NULL)
    {
        printf("%f->",a->m);
        printf("%d->",a->n);
        printf("%c->",a->o);
        printf("%s->",a->p);
        a=a->link;
    }
    printf("NULL");
}
