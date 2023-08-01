#include "binary_trees.h"
/**
 * binary_tree_insert_left - Entry point
 * @parent: parent
 * @value: val
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *child;
if (parent)
{
child = malloc(sizeof(binary_tree_t));
if (child == NULL)
return (NULL);
if (parent->left)
{
child = binary_tree_node(parent, value);
child->left = parent->left;
parent->left->parent = child;
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
