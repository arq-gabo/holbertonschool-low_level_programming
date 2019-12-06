#include "binary_trees.h"

/**
 * binary_tree_sibling - function for find the sibling of the node
 * @node: pointer for find the sibling node
 * Return: value of the sibling node, if node is null return Nil
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left != NULL && node->parent->right == node)
	{
		return (node->parent->left);
	}

	if (node->parent->right != NULL && node->parent->left == node)
	{
		return (node->parent->right);
	}

	return (NULL);

}
