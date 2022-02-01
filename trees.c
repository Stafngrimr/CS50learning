#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int number;
  struct node *left;
  struct node *right;
}
node;

int main(void)
{
  // Creation of the tree itself
  node *tree = NULL;

  node *b = malloc(sizeof(node));
  if (b == NULL)
  {
    return 1;
  }
  b->number = 4;
  b->left = NULL;
  b->right = NULL;
  tree = b;

  b = malloc(sizeof(node));
  if (b == NULL)
  {
    return 1;
  }
  b->number = 2;
  b->left = NULL;
  b->right = NULL;
  tree->left = b;

  b = malloc(sizeof(node));
  if (b == NULL)
  {
    return 1;
  }
  b->number = 6;
  b->left = NULL;
  b->right = NULL;
  tree->right = b

  // Creating recursive binary search tree function
  bool search(node *tree, int number)
  {
    // If nothing there, return false
    if(tree == NULL)
    {
      return false;
    }

    // If smaller than number, go down left path of tree
    else if (number < tree->number)
    {
      return search(tree->left, number);
    }

    // If great than number, go down right path of tree
    else if (number > tree->number)
    {
      return search(tree->right, number);
    }

    // If anything else (exact number) return true
    else
    {
      return true;
    }
  }
}
