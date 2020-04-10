#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* left;
    struct node* right;
};
struct node *newNode(int item) 
{ 
    struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->data = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
struct node* insert(struct node *node, int data) 
{ 
if (node == NULL) return newNode(data); 
  if (data < node->data) 
        node->left  = insert(node->left, data); 
    else if (data > node->data) 
        node->right = insert(node->right, data);    
return node; 
}  
struct node* delete(struct node *node, int data) 
{ 
if (node == NULL) return newNode(data); 
  if (data < node->data) 
        node->left  = delete(node->left, data); 
    else if (data > node->data) 
        node->right = delete(node->right, data);    
return node; 
}  


void inorder(struct node* root){
    if(root == NULL) return;
    inorder(root->left);
    printf("%d ->", root->data);
    inorder(root->right);
}
void main() 
{ 
    struct node *root = NULL; 
    root = insert(root, 50); 
    root = delete(root, 50);
    insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 60); 
    insert(root, 80);
 printf("\nInserting elements \n");
    inorder(root);
    delete(root,30);
    delete(root,20);
    delete(root,40);
    delete(root,70);
    delete(root,60);
    delete(root,80);
 printf("\n Empty list of BST after deletion\n");
} 
