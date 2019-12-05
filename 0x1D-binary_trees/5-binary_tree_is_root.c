#include "binary_trees.h"

/**
 * binary_tree_is_root - funtion for verify if a node is a root
 * @node: node for test
 * Return: if node is root return 1, else return 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{

	if (node == NULL)
	{
		return (0);
	}

	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
