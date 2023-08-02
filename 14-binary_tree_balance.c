#include "binary_trees.h"
/**
 * binary_tree_balance - Entry point
 * @tree: root
 * Return: Always 0 (Success)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree)
{
if (tree->left  && tree->right)
return (2);
if (tree->left == NULL && tree->right == NULL)
return (0);
}
if (tree)
{
size_t a = binary_tree_balance(tree->left);
size_t b = binary_tree_balance(tree->right);
return (-1 + (a + b));
}
return (0);
}
