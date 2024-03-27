#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_balance - gets the balance of the node
 * @tree: this is the root node
 *
 * Return: the balanced node
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
