#include "binary_trees.h"

/**
 * binary_tree_insert_left - c function to create a child
 *		for the left node in btree.
 * @parent: pointer to insert the child node in btree
 * @value: data to be stored in the new node.
 *
 * Return: NULL on failure and if NULL
 *		return pointer to new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *l_child = binary_tree_node(parent, value);

	if (l_child == NULL || parent == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		l_child->left = parent->left;
		parent->left->parent = l_child;
	}
	parent->left = l_child;

	return (l_child);
}
