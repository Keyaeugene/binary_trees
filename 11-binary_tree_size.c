#include "binary_trees.h"

/**
 * binary_tree_size - A function that measures the size
 * of a binary tree.
 * @tree: A pointer to the root node of the tree to measure
 * the size.
 * Return: The size of the node, or 0 if tree == NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizebin = 0;

	if (!tree)
		return (0);

	sizebin += binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;
	return (sizebin);
}
