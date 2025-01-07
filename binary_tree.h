#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <stddef.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 * 
 * @n: Integer tored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */

struct binary_tree_struct 
{
    int n; 
    struct binary_tree_struct *parent;
    struct binary_tree_struct *left;
    struct binary_tree_struct *right;
    
};
typedef struct binary_tree_struct binary_tree_t;

/* Task function prototypes*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);


#endif
