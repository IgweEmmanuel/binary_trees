#include "binary_trees.h"

/**
 * binary_tree_is_leaf - This is the function for the leaf
 * @node: this is a pointer to the node to b checked
 *
 * Return: returns int
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL) 
		return (1);
	else
		return (0);;
}
