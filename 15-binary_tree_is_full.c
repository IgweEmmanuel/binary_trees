#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Description: This function checks if a binary tree is full, meaning
 * every node in the tree has either 0 or 2 children.
 *
 * Return: If the tree is full, 1. Otherwise, 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    /* If the tree is empty, it is full by definition */
	if (tree == NULL)
		return (1);

	if ((tree->left == NULL && tree->right != NULL) ||
		(tree->left != NULL && tree->right == NULL))
		return (0);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
