#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of a given node
 * @node: node to search for uncle of
 * Return: pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;
	binary_tree_t *grandpa = NULL;

	if (!node)
		return (NULL);

	if (!node->parent || !node->parent->parent)
		return (NULL);

	grandpa = node->parent->parent;

	if (!grandpa->left || !grandpa->right)
		return (NULL);

	if (grandpa->left == node->parent)
	{
		uncle = grandpa->right;
		return (uncle);
	}
	uncle = grandpa->left;
	return (uncle);
}
