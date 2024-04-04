#include "binary_trees.h"

/**
 * binary_tree_preorder - Pre-order traversal check.
 * @tree: Root node
 * @func: Function call for each node, the value must be
 * passed as a parameter to this function
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n); /*Function with the current's node value/data*/
	binary_tree_preorder(tree->left, func); /*Recursive traverse left subtree*/
	binary_tree_preorder(tree->right, func); /*Recursive traverse right subtree*/
}
