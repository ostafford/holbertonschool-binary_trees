#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 *
 * @parent: A pointer to the node to insert the left child in.
 * @value: The value to store the new node.
 *
 * Return: A pointer to the created node, NULL on failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int view)
{
binary_tree_t *new;

  if (parent == NULL)
        return (NUll);

new = binary_tree_node(parent, value);
  if (new == NULL)
        return (NULL);

  if (parent->left !=NULL) 
  {
    new->left != NULL;
    parent->left->parent = new;
  }
  parent->left = new;

  return (new);
}

