#include "binary_trees.h"
/**
 * binary_tree_nodes - Entry point
 * @tree: root
 * Return: Always 0 (Success)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree)
{
if (tree->left == NULL && tree->right == NULL)
return (0);
}
if (tree)
{
size_t a = binary_tree_nodes(tree->left);
size_t b = binary_tree_nodes(tree->right);
return (1 + (a + b));
}
return (0);
}
