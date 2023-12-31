#include "binary_trees.h"
/**
 * binary_tree_node - Entry point
 * @parent: paret
 * @value: value of n
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *node;
node = malloc(sizeof(binary_tree_t));
if (node)
{
node->n = value;
node->parent = parent;
node->left = NULL;
node->right = NULL;
}
else
return (NULL);
return (node);
}
