#include "binary_trees.h"
/**
 * binary_tree_inorder - Entry point
 * @tree: root
 * @func: func
 * Return: Always 0 (Success)
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree)
{
if (func)
{
/*if (tree->parent == NULL)
func(tree->n);*/
binary_tree_inorder(tree->left, func);
if (tree)
func(tree->n);
binary_tree_inorder(tree->right, func);
}
}
}
