#include "binary_trees.h"
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *child;
if (parent != NULL)
{
child = malloc(sizeof(binary_tree_t));
if (child)
{
child->n = value;
if (parent->right)
{
child = binary_tree_node(parent, value);
parent->right->parent = child;
child->right = parent->right;
parent->right = child;
}
else
{
parent->right = child;
}
}
}
else
return (NULL);
return (child);
}
