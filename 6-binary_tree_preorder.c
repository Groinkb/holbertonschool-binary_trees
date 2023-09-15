#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal
 * @tree: Pointer to the root node
 * @func: Pointer to the function to apply to each node
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    func(tree->n); /* Apply the function to the current node */

    binary_tree_preorder(tree->left, func); /* Recursively traverse the left subtree */

    binary_tree_preorder(tree->right, func); /* Recursively traverse the right subtree */
}
