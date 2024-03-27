#include "binary_trees.h"

/**
 * binary_tree_preorder - this is the function that preorders
 * @tree: first parameter
 * @func: this is the second parameter
 *
 * Return: this returns 0 success
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
