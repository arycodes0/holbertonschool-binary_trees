#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: Parent node
 * @value: Data
 * Return: NULL if fail, new_child if succ
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child;

	if (!parent)
		return (NULL);

	new_child = malloc(sizeof(binary_tree_t));

	if (!new_child)
		return (NULL);

	new_child->n = value;
	new_child->left = NULL;
	new_child->right = NULL;
	new_child->parent = parent;

	if (parent->left != NULL)
	{
		new_child->left = parent->left;
		parent->left->parent = new_child;
	}
		parent->left = new_child;

	return (new_child);
}
