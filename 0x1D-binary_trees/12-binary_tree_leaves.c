#include "binary_trees.h"

/**
 * binary_tree_leaves - Function with counts the leave in a binnary trees
 * @tree: pointer to the node of the root in the binary tree for measure
 * the cuantity
 * Return: leave, if tree is NULL return 0
 *
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{

	size_t left_leave = 0, right_leave = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	left_leave = binary_tree_leaves((const binary_tree_t *)(tree->left));
	right_leave = binary_tree_leaves((const binary_tree_t *)(tree->right));

	return (right_leave + left_leave);

}
