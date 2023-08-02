#include "binary_trees.h"
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
/**
 * binary_tree_uncle - Entry point
 * @node: root
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node)
{
if (node->parent)
binary_tree_sibling(node->parent);
}
return (NULL);
}

/**
 * binary_tree_sibling - Entry point
 * @node: root
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node)
{
if (node->parent)
{
if (node->parent->left == node)
{
if (node->parent->right)
return (node->parent->right);
}
if (node->parent->right == node)
{
if (node->parent->left)
return (node->parent->left);
}
}
}
return (NULL);
}
