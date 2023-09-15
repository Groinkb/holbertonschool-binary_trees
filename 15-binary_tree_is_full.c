#include "binary_trees.h"
/**
 *binary_tree_is_full - check if binary tree is full
 *@tree:pinter to the node
 *Return: 1 or 0 if NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t full_der, full_iz = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	else
	{
		full_der = binary_tree_is_full(tree->right);
		full_iz = binary_tree_is_full(tree->left);
		return (full_der && full_iz);
	}
	return (0);
}
