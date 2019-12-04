#include "binary_trees.h"

/**
 * binary_tree_insert_right - add right node to the parent node
 * @parent: parent node
 * @value: value the node
 * Return: pointer to the node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node, *old_right_node = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	old_right_node = parent->right;

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = old_right_node;
	new_node->parent = parent;
	parent->right = new_node;

	if (old_right_node != NULL)
	{
		old_right_node->parent = new_node;
	}

	return (new_node);
}
