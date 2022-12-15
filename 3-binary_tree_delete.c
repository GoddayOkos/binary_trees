#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree recursively
 * @tree: binary tree to delete
 * Returns: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
