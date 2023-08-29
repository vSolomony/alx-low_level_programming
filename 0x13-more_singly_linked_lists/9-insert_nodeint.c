#include "lists.h"
/**
 * insert_nodeint_at_index - choose an index to insert node into.
 * @head: double pointer that stores address of head
 * @idx: index of node
 * @n: value of node
 * Return: the addrss of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;

	unsigned int i = 0;

		if (head == NULL || (*head) == NULL)
			return (NULL);

		new_node = (listint_t *) malloc(sizeof(listint_t));
		new_node->n = n;
		new_node->next = NULL;

		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
		temp = (*head);
		while (i < idx - 1)
			{
			temp = temp->next;
			i++;
			}

		if (temp == NULL)
		{
			new_node->next = NULL;
		}
		else
		{
		new_node->next = temp->next;
		temp->next = new_node;
		}

		return (new_node);
}
