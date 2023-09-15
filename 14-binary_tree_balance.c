#include "binary_trees.h"
/**
 *binary_tree_balance - measure the balance factor of a tree
 *@tree: a pointer to the root
 *Return: the balance factor or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t der_heigth = 0;
	size_t iz_heigth = 0;

	if (!tree)
	{
		return (0);
	}
	iz_heigth = binary_tree_height(tree->left);
	der_heigth = binary_tree_height(tree->right);

	return (iz_heigth - der_heigth);
}

/**
 *binary_tree_height - measures the height of a tree
 *@tree: a pointer to the root
 *Return: the measure of the tree or 0 if empty
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t der_heigth = 0;
	size_t iz_heigth = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		iz_heigth = binary_tree_height(tree->left);
	}

	if (tree->right != NULL)
	{
		der_heigth = binary_tree_height(tree->right);
	}

	if (der_heigth >= iz_heigth)
	{
		return (der_heigth + 1);
	}

	return (iz_heigth + 1);
}
