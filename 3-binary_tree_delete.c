#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree
 * @tree: a pointer to the root node of the tree to delete
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;
    
    binary_tree_delete(tree->left); /* Recursively delete all nodes in the left subtree */
    binary_tree_delete(tree->right); /* Recursively delete all nodes in the right subtree */

    free(tree); /* Free memory for the current node */
}
