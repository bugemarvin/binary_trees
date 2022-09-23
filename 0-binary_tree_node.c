#include "binary_trees.h"

/**
  * binary_tree_node - c function to create a tree node.
  * @parent: pointer to the root node created.
  * @value: data to be initialized on the new node
  *
  * Return: Always 0 (pointer for the created new node)
  *			-1 or NULL for failure
  */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root = malloc(sizeof(binary_tree_t));

	if (root == NULL)
	{
		return (NULL);
	}
	if (root != NULL)
	{
		(*root).left = NULL;
		(*root).right = NULL;
		(*root).n = value;
		(*root).parent = parent;
	}
	return (root);
}
