#include "binary_trees.h"

/**
 * binary_tree_height - calculates height of node
 * @tree: node to calculate height of
 * Return: Height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t countR = 0;
	size_t countL = 0;

	if (!tree || (!tree->left && !tree->right)) /* stop as leaf not as NULL*/
		return (0);

	countL = binary_tree_height(tree->left);
	countR = binary_tree_height(tree->right);
	if (countR >= countL)
		return (countR + 1);
	else
		return (countL + 1);
}
