#include <stdio.h>
#include <stdlib.h>

// Creating a node struct - requires node to be mentioned at the
// beginning to then call upon it within node
typedef struct node
{
  int number;
  struct node *next;
}
node;

typedef struct person
{
    struct person *parents[2];
    char alleles[2];
}
person;

int main(void)
{
  // Initialising list variable to start the list
  node *list = NULL;

  // Requesting mem for first node (not yet attached to list)
  node *n = malloc(sizeof(node));
  if (n == NULL)
  {
    return 1;
  }
  // Allocation 1 to number, and NULL to next
  n->number = 1;
  n->next = NULL;
  // Attaching the n node to list variable, this frees n
  list = n;

  // Requesting mem for second node, and allocating 2 to number
  // and NULL to next
  n = malloc(sizeof(node));
  if (n == NULL)
  {
    return 1;
  }
  n->number = 2;
  n->next = NULL;
  list->next = n;

  // Requesting mem for third node, and allocating 3 to number
  // and NULL to next
  n = malloc(sizeof(node));
  if (n == NULL)
  {
    // Different from before; also freeing memory in case
    // things go wrong
    free(list->next);
    free(list);
    return 1;
  }
  n->number = 3;
  n->next = NULL;
  // Adding second next due to this being third place
  // This can be done with a loop
  list->next->next = n;

  // Printing contents of number within each node
  for (node *tmp = list; tmp != NULL; tmp = tmp->next)
  {
    printf("%i\n", tmp->number);
  }

  // Freeing memory from each node of the list
  while (list != NULL)
  {
    node *tmp = list->next;
    free(list);
    list = tmp;
  }
}

// Segmentation fault = you touched memory you shouldn't have
