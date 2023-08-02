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
size_t a = binary_tree_height(tree->left);
size_t b = binary_tree_height(tree->right);
if (tree->left)
a++;
if (tree->right)
b++;
return (a - b);
}
return (0);
}
