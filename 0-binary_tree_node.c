#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: Parent node
 * @value: The new node
 * Return: NULL if fail, bi_node if succ
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bi_node;

	bi_node = malloc(sizeof(binary_tree_t));

	if (!bi_node)
		return (NULL);

	bi_node->n = value;
	bi_node->left = NULL;
	bi_node->right = NULL;
	bi_node->parent = parent;

	return (bi_node);
}
