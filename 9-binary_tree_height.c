#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_height - this measures the height of the binary tree
 * @tree: this is the pointer to the root node
 *
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if ((tree == NULL) || ((tree->left == NULL) && (tree->right ==NULL)))
		return (0);

	left = binary_tree_height(tree->left); 
	right = binary_tree_height(tree->right);

	if (left >= right)
		return (left) + 1;
	else
		return (right) + 1;
}
