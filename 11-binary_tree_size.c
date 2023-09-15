#include "binary_trees.h"
/**
 * binary_tree_size - measure binary tree size
 *@tree: a pointer to the root
 *Return: the size of the tree or 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t der_size = 0;
	size_t iz_size = 0;

	if (!tree)
	{
		return (0);
	}

	der_size = binary_tree_size(tree->right);
	iz_size = binary_tree_size(tree->left);

	return (1 + der_size + iz_size);
}
