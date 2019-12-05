#include "binary_trees.h"

/**
 * binary_tree_postorder - function with traverse a binary tree
 * using a path post-order
 * @tree: node of traverse a tree
 * @func: pointer to function for execute post order
 * Return: if tree or function is NULL, does nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
