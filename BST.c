#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// addNode(){}

struct node *addNode(struct node *root, int data) // 30,50
{                                                 // null,30
    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    else
    {

        if (data > root->data)
        {
            // right
            root->right = addNode(root->right, data);
        }
        else
        {
            // left
            root->left = addNode(root->left, data);
        }
    }

    return root;
}

void inOrder(struct node *root)
{
    // left root right
    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %d", root->data);
        inOrder(root->right);
    }
}

void preOrder(struct node *root)
{

    if (root != NULL)
    {
        printf(" %d", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root)
{

    if (root != NULL)
    {
        preOrder(root->left);
        preOrder(root->right);
        printf(" %d", root->data);
    }
}

int maxFind(struct node *root)
{
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root->data;
}

int search(struct node *root,int key){
    if(root == NULL){
        return 0;
    }
    else if(root->data == key){
        return 1;
    }else if(key > root->data){
        return search(root->right,key);
    }else{
        return search(root->left,key);
    } 
}

int main()
{

    struct node *root = NULL;
    root = addNode(root, 30);
    addNode(root, 50);
    addNode(root, 20);
    addNode(root, 10);
    addNode(root, 25);
    addNode(root, 55);

    // printf("\n%d %d %d %d", root->data, root->left->data, root->right->data,root->left->left->data);
    // tree travesal
    inOrder(root);

    // sum of all nodes tree
    // max node from tree
    printf("\nMAX = %d", maxFind(root));

    printf("\n25 => %d", search(root, 25));  //->1 found
    printf("\n222 => %d", search(root, 222)); //->0 not found
    
    removeNode(root,55);

     inOrder(root);
    return 0;
}