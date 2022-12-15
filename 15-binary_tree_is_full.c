#include "binary_trees.h"

/**
 * is_full_recursive - checks if a binary tree is full recursively
 * @tree: a pointer to the tree to be checked
 *
 * Return: int
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL  && tree->right == NULL) ||
				(tree->left == NULL && tree->right != NULL) ||
				is_full_recursive(tree->left) == 0 ||
				is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}
/**
 * binary_tree_is_full - checks if the binary tree if full
 * @tree: the pointer to the tree to be chacked
 *
 * Return: int
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
