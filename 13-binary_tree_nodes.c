#include "binary_trees.h"
/**
 * binary_tree_nodes - A function that counts the nodes with
 * at least 1 child
 * @tree: A pointer to the root node
 * Return: The number of nodes, or 0 if tree == NULL
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
	/*if root has at least one child already, start the count on 1*/
		count = 1;
	count += binary_tree_nodes(tree->left);
	/* obtain the count of nodes recursively*/
	count += binary_tree_nodes(tree->right);
	/*return the amount of times, each node has at least one child*/
	return (count);
}
