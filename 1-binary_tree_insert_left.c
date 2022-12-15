#include "binary_trees.h"

/**
 * binary_tree_insert_left - node to be inserted to the left
 * @parent:  pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node, *temp;

	if (!parent)
		return (NULL);
	left_node = binary_tree_node(parent, value);
	if (!left_node)
		return (NULL);

	temp = parent->left;
	parent->left = left_node;

	if (temp)
	{
		temp->parent = left_node;
		left_node->left = temp;
	}
	return (left_node);
}
