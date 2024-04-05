#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: Pointer to the node to find the uncle
 * Return: Pointer to the uncle node, or NULL if no uncle, or node is NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left == node->parent)
	{
		if (node->parent->parent->right)
			return (node->parent->parent->right);
		else
			return (NULL);
	}
	else
	{
		if (node->parent->parent->left)
			return (node->parent->parent->left);
		else
			return (NULL);
	}
}

