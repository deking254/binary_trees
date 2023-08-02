#include "binary_trees.h"
/**
 * binary_tree_is_full - Entry point
 * @tree: root
 * Return: Always 0 (Success)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree)
{
if (tree->left == NULL || tree->right == NULL)
return (0);
}
if (tree)
{
size_t a = binary_tree_is_full(tree->left);
size_t b = binary_tree_is_full(tree->right);
return ((a == b) ? 1 : 0);
}
return (0);
}
