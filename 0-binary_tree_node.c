#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a tree node
 * @parent: a pointer to the parent node.
 * @value: the value to put in the new node.
 * Return: a pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode)
	{
		newNode->n = value;
		newNode->parent = parent;
		newNode->left = NULL;
		newNode->right = NULL;
	}
	else
	{
		free(newNode);
		return (NULL);
	}
	return (newNode);
}
