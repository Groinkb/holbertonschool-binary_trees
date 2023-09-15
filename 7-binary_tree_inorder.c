#include "binary_trees.h"

/**
 * binary_tree_inorder - In-order traversal of a binary tree.
 * @tree: Pointer to the root node.
 * @func: Pointer to the function for each node's value.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n); /* Apply func to each node's value */
	binary_tree_inorder(tree->right, func);
}
