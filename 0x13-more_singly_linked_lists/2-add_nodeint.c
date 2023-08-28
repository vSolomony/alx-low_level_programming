#include "lists.h"
/**
 * add_nodeint - adding nodes with different values
 * @n: a const value of node
 * @head: pointer that stores the address of node
 * Return: the node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
