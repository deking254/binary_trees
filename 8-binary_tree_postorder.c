#include "binary_trees.h"
/**
 * binary_tree_postorder - Entry point
 * @tree: root
 * @func: func
 * Return: Always 0 (Success)
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree)
{
if (func)
{
binary_tree_postorder(tree->left, func);
if (tree->left)
func(tree->left->n);
binary_tree_postorder(tree->right, func);
if (tree->right)
func(tree->right->n);
if (tree->parent == NULL)
func(tree->n);
}
}
}
