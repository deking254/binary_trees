#include "binary_trees.h"
/**
 * binary_tree_is_root - Entry point
 * @node: node root
 * Return: Always 0 (Success)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node)
{
if (node->parent)
return (0);
}
else
return (0);
return (1);
}
