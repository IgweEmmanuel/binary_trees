#include "binary_trees.h"

/**
 * binary_tree_height - this measures the height of the binary tree
 * @tree: this is the pointer to the root node
 *
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left) + 1; 
	right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return left;
	else
		return right;
}
