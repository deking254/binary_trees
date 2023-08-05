#include "binary_trees.h"
/**
 * binary_tree_is_complete - Entry point
 * @tree: root
 * Return: Always 0 (Success)
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
int forward = 0;
int back = 0;
if (tree)
{
binary_tree_t *nodes[100];
nodes[back++] = (binary_tree_t *)tree;
int null_present = 0;
while (forward < back)
{
binary_tree_t *current = nodes[forward++];
if (current->left)
{
if (null_present)
return (0);
nodes[back++] = current->left;
}
else
null_present = 1;
if (current->right)
{
if (null_present)
return (0);
nodes[back++] = current->right;
}
else
null_present = 1;
}
}
return (1);
}
