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

/**
 * binary_tree_is_perfect - function for check if a binary tree is perfect
 * @tree: pointer to the root
 * Return: 0 if the binary tree is not perfect
 * 1 if the binary tree is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	int a, perfect = 1, height;

	height = (int)binary_tree_height(tree);

	if (height == 0)
	{
		perfect = 1;
	}
	else
	{
		for (a = 0; a < height; a++)
		{
			perfect *= 2;
		}
		perfect = (perfect * 2) - 1;
	}

	if (perfect == (int)binary_tree_size(tree))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
