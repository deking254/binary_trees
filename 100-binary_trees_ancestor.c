#include "binary_trees.h"
size_t binary_tree_depth(const binary_tree_t *tree);
/**
 * binary_trees_ancestor - Entry point
 * @fi: root
 * @se: roo
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_trees_ancestor(binary_tree_t *fi, binary_tree_t *se)
{
binary_tree_t *f = (binary_tree_t *)fi;
binary_tree_t *s = (binary_tree_t *)se;
size_t a = binary_tree_depth(fi);
size_t b = binary_tree_depth(se);
if (fi == se)
return (fi);
if (a == b)
{
if (f && s)
{
while (f != s)
{
if (f && s)
{
f = f->parent;
s = s->parent;
if (f == s)
return (f);
}
}
}
}
if (a > b)
{
if (f && s)
{
while (f != s)
{
if (f && s)
{
if (a > b)
f = f->parent;
else
{
s = s->parent;
f = f->parent;
}
a = binary_tree_depth(f);
b = binary_tree_depth(s);
if (a == b)
{
if (f == s)
return (f);
}
}
}
}
}
if (a < b)
{
if (f && s)
{
while (f != s)
{
if (f && s)
{
if (a < b)
s = s->parent;
else
{
s = s->parent;
f = f->parent;
}
a = binary_tree_depth(f);
b = binary_tree_depth(s);
if (a == b)
{
if (f == s)
return (f);
}
}
}
}
}
return (NULL);
}
/**
 * binary_tree_depth - Entry point
 * @tree: root
 * Return: Always 0 (Success)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t y = 0;
if (tree)
{
if (tree->parent)
{
size_t a = binary_tree_depth(tree->parent);
return (1 + (a));
}
}
return (y);
}
