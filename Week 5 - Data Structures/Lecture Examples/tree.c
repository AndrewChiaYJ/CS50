// Implements a list of numbers as a binary search tree

# include <stdio.h>
# include <stdlib.h>

// Represents a node
typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;

// Prototype of functions coming
void free_tree(node *root);
void print_tree(node *root);

// Main function
int main (void)
{
    // Tree of size 0
    node *tree = NULL;

    //Add a number to list
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 2;
    n->left = NULL;
    n->right = NULL;
    tree = n;

    //Add a number to list
    n = malloc(sizeof(node));
    if (n==NULL)
    {
        return 1;
    }
    n ->number = 1;
    n->left = NULL;
    n->right = NULL;
    tree->left = n;

    //Add a number to list
    n = malloc(sizeof(node));
    if (n==NULL)
    {
        return 1;
    }
    n ->number = 3;
    n->left = NULL;
    n->right = NULL;
    tree->right = n;

    // Print tree
    print_tree(tree);

    //Free tree
    free_tree(tree);

    return 0;

void free_tree(node *root)
{
    if (root==NULL)
    {
        return;
    }
    free_tree(root->left);
    free_tree(root->right);
    free(root);
}

void print_tree(node *root)
{
    if (root==NULL)
    {
        return;
    }
    print_tree(root->left);
    printf("%i\n", root->number);
    print_tree(root->right);
}

}