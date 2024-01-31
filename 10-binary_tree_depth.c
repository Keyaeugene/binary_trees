#include "binary_trees.h"
/**
 * binary_tree_depth - Function that measures the depth
 * of a node.
 * @tree: pointer to the node to measure the depth.
 * Return: The depth of the node, or 0 if tree == NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		count++;
		tree = tree->parent;
	}
	return (count);
}
