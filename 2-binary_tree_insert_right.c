#include "binary_trees.h"

/**
 * binary_tree_insert_right - node to be inserted to the right
 * @parent:  pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node, *temp;

	if (!parent)
		return (NULL);
	right_node = binary_tree_node(parent, value);
	if (!right_node)
		return (NULL);

	temp = parent->right;
	parent->right = right_node;

	if (temp)
	{
		temp->parent = right_node;
		right_node->right = temp;
	}
	return (right_node);
}
