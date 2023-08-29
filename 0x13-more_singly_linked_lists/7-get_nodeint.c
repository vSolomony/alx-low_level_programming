#include "lists.h"
/**
 * get_nodeint_at_index - values of a specific node
 * @head: address of the head
 * @index: index of the node
 * Return: the address of the selected node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned  int i = 0;

		if (head == NULL)
			return (NULL);

		while (i < index && head != NULL)
		{
			head = head->next;
			i++;
		}
		return (head);
}
