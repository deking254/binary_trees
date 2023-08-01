#include "binary_trees.h"
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *child;
if (parent != NULL)
{
child = malloc(sizeof(binary_tree_t));
if (child == NULL)
return (NULL);
if (parent->left)
{
child = binary_tree_node(parent, value);
parent->left->parent = child;
child->left = parent->left;
parent->left = child;
}
else
{
child = binary_tree_node(parent, value);
parent->left = child;
}
}
else
return (NULL);
return (child);
}
