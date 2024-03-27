#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_depth - the depth of a tree finder
 * @tree: this is the pointer to the node
 *
 * Return: size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if ((tree == NULL) || (tree->parent == NULL))
		return (0);

	depth = binary_tree_depth(tree->parent);

	return (depth + 1);
}
