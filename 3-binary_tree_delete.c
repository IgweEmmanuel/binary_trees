#include "binary_trees.h"

/**
 * binary_tree_delete - this is the functio to delete node
 * @tree: this is the node to delete
 *
 * Return: always returns 0 success
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
