#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Root node
 * Return: 0 if fail, height of tree if succ
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftside_oftree;
	size_t rightside_oftree;

	if (!tree)
		return (0);

	/*To correct my output, I added this base case for the leaf node*/
	if (!tree->left && !tree->right)
		return (0);

	else
	{
		leftside_oftree = binary_tree_height(tree->left);
		rightside_oftree = binary_tree_height(tree->right);
	}

	if (leftside_oftree > rightside_oftree)
		return (leftside_oftree + 1);

	else
		return (rightside_oftree + 1);
}
