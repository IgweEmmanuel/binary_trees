#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_nodes - counts the nodes with at least one child
 * @tree: pointer to the root node
 *
 * Return: number of node with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left;
	size_t right;
	size_t total;

	if (tree == NULL)
		return (0);

	if ((tree->left != NULL) || (tree->right != NULL))
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	total = left + right;
	return (total);
}
