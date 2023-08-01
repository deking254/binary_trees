#include "binary_trees.h"
void binary_tree_delete(binary_tree_t *tree)
{

if (tree)
{
binary_tree_t *left = tree->left;
binary_tree_t *right = tree->right;
free(tree);
while(left)
{
if (left)
{

}
}
}
}


