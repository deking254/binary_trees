#include "binary_trees.h"
/**
 * binary_tree_depth - Entry point
 * @tree: root
 * Return: Always 0 (Success)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t y = 0;
if (tree)
{
if (tree->parent)
{
size_t a = binary_tree_depth(tree->parent);
return (1 + (a));
}
}
return (y);
}
