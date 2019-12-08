#include "binary_trees.h"

/**
 * binary_tree_height - function for measure the hight the binary tree
 * @tree: root of binary tree
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		return (left_height + 1);
	}
	else
	{
		return (right_height + 1);
	}
}

/**
 * binary_tree_balance - function with measure the valance of the binary tree
 * @tree: pointer to the root
 * Return: the balance, if tree is NULL return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	size_t left_height_bal, right_height_bal;

	if (tree == NULL)
	{
		return (0);
	}

	left_height_bal = binary_tree_height(tree->left);
	right_height_bal = binary_tree_height(tree->right);

	return ((int)left_height_bal - (int)right_height_bal);

}
