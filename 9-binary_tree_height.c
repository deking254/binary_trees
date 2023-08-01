#include "binary_trees.h"
/**
 * binary_tree_height - Entry point
 * @tree: root
 * Return: Always 0 (Success)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
return (-1);
else
{
size_t a = binary_tree_height(tree->left);
size_t b = binary_tree_height(tree->right);
return (1 + ((a >= b) ? b : a));
}
return (-1);
}
