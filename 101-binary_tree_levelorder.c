#include "binary_trees.h"
/**
 * binary_tree_levelorder - Entry point
 * @tree: root
 * @func: func
 * Return: Always 0 (Success)
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
int forward = 0;
int back = 0;
if (tree && func)
{
binary_tree_t *nodes[100];
nodes[back++] = (binary_tree_t *)tree;
while (forward < back)
{
binary_tree_t *current = nodes[forward++];
func(current->n);
if (current->left)
nodes[back++] = current->left;
if (current->right)
nodes[back++] = current->right;
}
}
}
