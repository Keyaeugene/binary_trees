#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as
 * the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a pointer to the new left-child created or NULL if it failed
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode;
	binary_tree_t *oldLeft;

	if (parent == NULL)
		return (NULL);
	leftNode = malloc(sizeof(binary_tree_t));
	oldLeft = parent->left;
	if (leftNode)
	{
		leftNode->n = value;
		leftNode->parent = parent;
		if (parent->left == NULL)
		{
			parent->left = leftNode;
			leftNode->left = NULL;
			leftNode->right = NULL;
		}
		else
		{
			parent->left = leftNode;
			leftNode->left = oldLeft;
			oldLeft->parent = leftNode;
			leftNode->right = NULL;
		}
	}
	else
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}
	return (parent->left);
}
