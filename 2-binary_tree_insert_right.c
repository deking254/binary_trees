#include "binary_trees.h"
/**
 * binary_tree_insert_right - Entry point
 * @parent: parent
 * @value: val
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *child;
if (parent)
{
if (parent->right)
{
child = binary_tree_node(parent, value);
parent->right->parent = child;
child->right = parent->right;
parent->right = child;
}
else
{
child = binary_tree_node(parent, value);
parent->right = child;
}
}
else
return (NULL);
return (child);
}
