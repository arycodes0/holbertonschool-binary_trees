#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Root node
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;
	const binary_tree_t *temp = tree;

	if (!tree)
		return (0);

	while (temp->left)
	{
		left_height++;
		temp = temp->left;
	}

	temp = tree;

	while (temp->right)
	{
		right_height++;
		temp = temp->right;
	}

	return (left_height == right_height);
}
