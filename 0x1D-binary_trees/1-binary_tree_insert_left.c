#include "binary_trees.h"

/**
 * binary_tree_insert_left - add right node to the parent node
 * @parent: parent node
 * @value: value the node
 * Return: pointer to the node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node, *old_left_node = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	old_left_node = parent->left;

	new_node->n = value;
	new_node->right = NULL;
	new_node->left = old_left_node;
	new_node->parent = parent;
	parent->left = new_node;

	if (old_left_node != NULL)
	{
		old_left_node->parent = new_node;
	}

	return (new_node);
}
