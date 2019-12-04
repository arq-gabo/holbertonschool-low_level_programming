#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_delete - fucntion for delete a binary tree complete
 * @tree: pointer to node of binary tree for delete
 * Return: binary tree delete
 */

void binary_tree_delete(binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return;
	}

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	printf("free: %d\n", tree->n);
	free(tree);

}
