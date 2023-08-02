#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t power(size_t base, size_t exponent);
/**
 * binary_tree_is_perfect - Entry point
 * @tree: root
 * Return: Always 0 (Success)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t a = binary_tree_height(tree);
size_t b =  power(2, (a + 1)) - 1;
size_t c = binary_tree_size(tree);
if (b ==  c)
return (1);
return (0);
}

/**
 * power - Entry point
 * @base: root
 *@exponent: exp
 * Return: Always 0 (Success)
 */
size_t power(size_t base, size_t exponent)
{
size_t result = 1;
for (size_t i = 0; i < exponent; i++)
result *= base;
return (result);
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
