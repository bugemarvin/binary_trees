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
	parent = malloc(sizeof(binary_tree_t));
	
	if (!parent)
		return (NULL);
	if (parent != NULL)
	{
		(*parent).left = NULL;
		(*parent).right = NULL;
		(*parent).n = value;
	}
	return (parent);
}
