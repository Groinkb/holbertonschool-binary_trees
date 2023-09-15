#include "binary_trees.h"
/**
 *binary_tree_leaves- check if a node if a leaf
 *@tree: pointer to the node to check
 * Return: NULL if not leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_der, leaves_iz = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}

	leaves_iz = binary_tree_leaves(tree->left);
	leaves_der = binary_tree_leaves(tree->right);

	return (leaves_der + leaves_iz);
}
