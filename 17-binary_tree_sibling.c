#include "binary_trees.h"
/**
 * binary_tree_sibling - A function that finds the sibling of a node.
 * @node: A pointer to the node to find the sibling.
 * Return: The sibling node on succes, NULL otherwise
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (!node->parent->left || !node->parent->right)
		return (NULL);
	if (node->parent->right && node->parent->right != node)
		return (node->parent->right);
	if (node->parent->left && node->parent->left != node)
		return (node->parent->left);
	return (NULL);
}
