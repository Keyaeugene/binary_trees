#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is root
 * @node: node to check for root status
 * Return: 1 if root, 0 else
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}
