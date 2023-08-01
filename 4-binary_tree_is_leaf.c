#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Entry point
 * @node: nodeleaf
 * Return: Always 0 (Success)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node)
{
if (node->left)
return (0);
if (node->right)
return (0);
}
else
return (0);
return (1);
}
