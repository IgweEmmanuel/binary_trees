#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_leaves - this outputs leaves of a tree
 * @tree: the pointer to the node
 *
 * Return: size_t
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaf;
	size_t right_leaf;
	size_t total_leaf;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	left_leaf = binary_tree_leaves(tree->left);
	right_leaf = binary_tree_leaves(tree->right);
	total_leaf = left_leaf + right_leaf;
	return (total_leaf);
}
