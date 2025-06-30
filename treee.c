#include<stdio.h>
#include<malloc.h>
struct node{
int data;
struct node *left;
struct node *right;

};
 struct node* createtree(int data){

     struct node *n;
     n=(struct node*)malloc(sizeof(struct node));
     n->data=data;
     n->left=NULL;
     n->right=NULL;

     return n;
 };

 void preorder(struct node* root){

     if(root!=NULL){

        printf(" %d" , root->data);
        preorder(root->left);
        preorder(root->right);

     }
 }

 void postorder(struct node* root){

     if(root!=NULL){

        postorder(root->left);
        postorder(root->right);

        printf(" %d" , root->data);

     }
 }

 void inorder(struct node* root){

     if(root!=NULL){

        inorder(root->left);
         printf(" %d" , root->data);
        inorder(root->right);

     }
 }

 int main()
 {
     //creating the root node
     struct node *p=createtree(4);

     //creating the child node

     struct node *p1=createtree(1);
     struct node *p2=createtree(6);
     struct node *p3=createtree(5);
     struct node *p4=createtree(2);



     p->left=p1;
     p->right=p2;
     p1->left=p3;
     p1->right=p4;

     printf("pre Order :");
     preorder(p);

     printf("\npost Order :");
     postorder(p);

     printf("\nin order :");
     inorder(p);


     getchar();

     return 0;
 }
