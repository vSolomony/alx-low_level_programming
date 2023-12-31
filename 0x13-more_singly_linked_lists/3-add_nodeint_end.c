#include "lists.h"
/**
 * add_nodeint_end - adding node in the end
 * @head: pointer head of node that stores address
 * @n: const value of a node
 * Return: Returns node address.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	temp = *head;

	new_node = (listint_t *)malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
			return (new_node);
		}

		while (temp->next != NULL)
			temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
