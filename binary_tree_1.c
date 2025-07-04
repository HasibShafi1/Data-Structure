#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
}*root;
struct node *preorder(struct node *root);

struct node *postorder(struct node *root);

struct node *inorder(struct node *root);

struct node *createnode(int data)
{
    struct node *n;
    n= (struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
int main()
{
    struct node *p=createnode(0);
    struct node *p1=createnode(1);
    struct node *p2=createnode(2);
    struct node *p3=createnode(3);
    struct node *p4=createnode(4);
    struct node *p5=createnode(5);
    struct node *p6=createnode(6);

    p->left=p1;
    p->right=p2;

    p1->left=p3;
    p1->right=p4;

    p2->left=p5;
    p2->right=p6;

    printf("pre order ->");
    preorder(p);

    printf("\n\npost order ->");
    postorder(p);

    printf("\n\nin order ->");
    inorder(p);

    getch();
    return 0;
}

struct node *preorder(struct node *root)
{
    if (root!=NULL){

        printf(" %d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }

};

struct node *postorder(struct node *root)
{
    if (root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf(" %d ",root->data);
    }
};

struct node *inorder(struct node *root)
{
    if (root!=NULL){
        inorder(root->left);
        printf(" %d ",root->data);
        inorder(root->right);

    }
};

