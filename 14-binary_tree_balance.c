#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
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

/**
 * binary_tree_height - Entry point
 * @tree: root
 * Return: Always 0 (Success)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t y = 0;
if (tree == NULL)
return (y);
if (tree->left == NULL && tree->right == NULL)
return (y);
else
{
size_t a = binary_tree_height(tree->left);
size_t b = binary_tree_height(tree->right);
return (1 + ((a > b) ? a : b));
}
return (1);
}
