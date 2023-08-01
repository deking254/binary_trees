#include "binary_trees.h"
/**
 * binary_tree_size - Entry point
 * @tree: root
 * Return: Always 0 (Success)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t y = 0;
if (tree)
{
size_t a = binary_tree_size(tree->left);
size_t b = binary_tree_size(tree->right);
return (1 + (a + b));
}
return (y);
}
