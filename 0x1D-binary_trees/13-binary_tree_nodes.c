#include "binary_trees.h"

/**
 *  binary_tree_nodes - function with counts the nodes leats 1 child
 * in a binary tree
 * @tree: pointer to the root
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t left_node = 0, right_node = 0, child = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		child = 0;
	}
	else if (tree->left != NULL || tree->right != NULL)
	{
		child = 1;
	}

	left_node = binary_tree_nodes((const binary_tree_t *)(tree->left));
	right_node = binary_tree_nodes((const binary_tree_t *)(tree->right));

	return (left_node + child + right_node);

}
