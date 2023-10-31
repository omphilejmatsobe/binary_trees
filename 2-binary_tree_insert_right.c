#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert a node
 * @parent: pointer to the node
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n;

	if (parent == NULL)
		return (NULL);
	n = binary_tree_node(parent, value);
	if (n == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		n->right = parent->right;
		parent->right->parent = n;
	}
	parent->right = n;
	return (n);
}
