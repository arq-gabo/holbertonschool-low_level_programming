#include "binary_trees.h"

/**
 * binary_tree_is_full - function for check if the binary tree is full
 * @tree: pointer to the root node
 * Return: if tree is NULL return 0
 *
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	int full_left = 0, full_right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if ((!(tree->right) && tree->left) || (!(tree->left) && tree->right))
	{
		return (1);
	}

	full_left = binary_tree_is_full(tree->left);
	full_right = binary_tree_is_full(tree->right);

	if (full_right && full_left)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
