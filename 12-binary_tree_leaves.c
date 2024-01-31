#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves of a tree
 * @tree: tree to count the leaves of
 * Return: amount of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t countL = 0;
	size_t countR = 0;

	if (!tree)
		return (0);
	countL = binary_tree_leaves(tree->left);
	countR = binary_tree_leaves(tree->right);
	/* If leaf, return 1 */
	if (!tree->left && !tree->right)
		return (1);
	/* Returns leaf status of both children (range 0-2) */
	return (countR + countL);
}
