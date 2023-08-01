#include "binary_trees.h"
/**
 * binary_tree_preorder - Entry point
 * @tree: root
 * @func: func
 * Return: Always 0 (Success)
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree)
{
if (func)
{
if (tree->parent == NULL)
func(tree->n);
if (tree->left)
func(tree->left->n);
binary_tree_preorder(tree->left, func);
if (tree->right)
func(tree->right->n);
binary_tree_preorder(tree->right, func);
}
}
}
