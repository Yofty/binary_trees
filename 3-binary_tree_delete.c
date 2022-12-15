#include "binary_trees.h"

/**
 * binary_tree_delete -  deletes an entire binary tree
 * @tree : the pointer to the tree to be deleted
 *
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delet(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
