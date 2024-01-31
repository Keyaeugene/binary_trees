#include "binary_trees.h"
#include "11-binary_tree_size.c"

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

/**
 * binary_tree_is_full - A function that checks if a
 * binary tree is full
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 on true, 0 on false
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}

/**
 * binary_tree_is_perfect - checks if a tree is perfect
 * @tree: tree to perform perfect check on
 * Return: 1 on perfection
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
	{
		if (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0)
			return (1);
	}

	return (0);
}
