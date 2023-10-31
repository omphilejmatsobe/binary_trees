#include "binary_trees.h"
/**
 * binary_tree_node - Creates a new binary tree node.
 * @parent: A pointer to the parent of the new node.
 * @value: input int type to be stored in the new node.
 *
 * Return: pointer to the new node if success
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
