#include "binary_trees.h"

/**
 * binary_tree_delete - Deleting a binary tree.
 * @tree: Tree to delete
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
