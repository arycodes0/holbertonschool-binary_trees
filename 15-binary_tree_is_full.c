#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Root node
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/*If the current node has no child*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/*If the current node has two children*/
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/*And if the current node has only one child*/
	return (0);
}

