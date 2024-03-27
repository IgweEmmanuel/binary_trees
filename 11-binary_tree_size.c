#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_size - this outputs the tree size
 * @tree: this is the node
 *
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_of_tree;
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	size_of_tree = left + right;
	return (size_of_tree + 1);
}
