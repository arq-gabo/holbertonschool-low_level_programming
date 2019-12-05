#include "binary_trees.h"

/**
 * binary_tree_depth - function for measure the depth of a node
 * in a binary tree
 * @tree: node in a binary tree
 * Return: return depth, if tree is NULL return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{

	binary_tree_t *walk = (binary_tree_t *)tree;
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}

	while (walk->parent != NULL)
	{
		depth++;
		walk = walk->parent;
	}

	return (depth);

}
