#include "binary_trees.h"

/**
 * binary_tree_size - function for measure the size of the binary tree
 * @tree: pointer to the root
 * Return: the measure of the root, if tree is NULL return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{

	size_t left_size = 0, right_size = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	left_size = binary_tree_size((const binary_tree_t *)(tree->left));
	right_size = binary_tree_size((const binary_tree_t *)(tree->right));

	return (left_size + 1 + right_size);

}
