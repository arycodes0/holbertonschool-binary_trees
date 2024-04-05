#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree.
 * @tree: Root node
 * Return: 0 if fail, depth of tree if succ
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int right_depth;
	int left_depth;

	if (!tree)
		return (0);

	right_depth = binary_tree_depth(tree->left);
	left_depth = binary_tree_depth(tree->right);

	if (left_depth > right_depth)
		return (left_depth + 1);

	else
		return (right_depth + 1);
}
