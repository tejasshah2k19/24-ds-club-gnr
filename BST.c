#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// addNode(){}

struct node *addNode(struct node *root, int data)
{
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
            root->right = malloc(sizeof(struct node));
            root->right->data = data;
            root->right->left = NULL;
            root->right->right = NULL;
        }
        else
        {
            // left
            root->left = malloc(sizeof(struct node));
            root->left->data = data;
            root->left->left = NULL;
            root->left->right = NULL;
        }
        return root;
    }
}
int main()
{

    struct node *root = NULL;
    root = addNode(root, 30);
    addNode(root, 50);
    addNode(root, 20);

    printf("\n%d %d %d", root->data, root->left->data, root->right->data);
    return 0;
}