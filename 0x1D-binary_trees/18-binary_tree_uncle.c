#include "binary_trees.h"

/**
 * binary_tree_uncle - function for find the uncle of the node
 * @node: pointer to the node
 * Return: if the node is null or not have uncle return NULL
 * if have uncle, return the value of the node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	binary_tree_t *temp = node;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	temp = node->parent;

	if (temp->parent == NULL)
	{
		return (NULL);
	}

	if (temp->parent->right != NULL && temp->parent->left == temp)
	{
		return (temp->parent->right);
	}

	if (temp->parent->left != NULL && temp->parent->right == temp)
	{
		return (temp->parent->left);
	}

	return (NULL);

}
