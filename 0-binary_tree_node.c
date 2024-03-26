#include "binary_trees.h"
/**
 * binary_tree_node - This is the function of this code
 * @parent: This is the pointer to the parent node
 * @value: This is the value to be inputed in the node
 *
 * Return: This will return a binary tree node or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	
	if (new_node == NULL)
		return NULL;

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return new_node;
}
