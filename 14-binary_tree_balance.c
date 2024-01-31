#include "binary_trees.h"

/**
 * binary_tree_heightR - calculates height of the left side
 * @tree: tree to calculate height of
 * Return: height
 */
int binary_tree_heightR(const binary_tree_t *tree)
{
	int countR = 0;
	int countL = 0;

	if (!tree) /* stop as leaf not as NULL*/
		return (0);

	countL = binary_tree_heightR(tree->left);
	countR = binary_tree_heightR(tree->right);
	if (countR >= countL)
		return (countR + 1);
	else
		return (countL + 1);
}
/**
 * binary_tree_heightL - calculates height of the left side
 * @tree: tree to calculate height of
 * Return: height
 */
int binary_tree_heightL(const binary_tree_t *tree)
{
	int countR = 0;
	int countL = 0;

	if (!tree) /* stop as leaf not as NULL*/
		return (0);

	countL = binary_tree_heightL(tree->left);
	countR = binary_tree_heightL(tree->right);
	if (countR >= countL)
		return (countR + 1);
	else
		return (countL + 1);
}
/**
 * binary_tree_balance - calculates balance factor of a tree
 * @tree: tree to calculate the balance factor of
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int countL = 0;
	int countR = 0;

	if (!tree) /* stop as leaf not as NULL*/
		return (0);

	countL = binary_tree_heightL(tree->left);
	countR = binary_tree_heightR(tree->right);

	return (countL - countR);
}
