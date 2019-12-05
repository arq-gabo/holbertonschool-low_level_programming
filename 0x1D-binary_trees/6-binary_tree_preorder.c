#include "binary_trees.h"

/**
 * binary_tree_preorder - function transverse the tree
 * binary using the preorder path
 * @tree: node of tree to transverse
 * @func: pointer to function to execute pre-order
 * Return: Empty
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}
