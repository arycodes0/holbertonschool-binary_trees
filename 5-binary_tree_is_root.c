#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root.
 * @node: Node to check
 * Return: 0 if fail, 1 for succ
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (node->parent == NULL);
}
