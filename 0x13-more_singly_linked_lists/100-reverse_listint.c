#include "lists.h"
/**
 * reverse_listint - reverse node list
 * @head: double pointer that hold addrss of head node
 * Return: the reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *curr_node, *next_node;

	prev_node = 0;
	curr_node = next_node = *head;

	while (next_node != NULL)
	{
		next_node = curr_node->next;
		curr_node->next = prev_node;
		prev_node = curr_node;
		curr_node = prev_node;
	}

	*head = prev_node;

	return (*head);
}

