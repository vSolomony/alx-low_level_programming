#include "lists.h"
/**
 * get_dnodeint_at_index - return the node created at index or null
 * @head: head pointer of list
 * @index: index to add on it the node
 * Return: node created or NULL
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int the_size;
	dlistint_t *temp;

	the_size = 0;
	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
	if (index == the_size)
	return (temp);
	the_size++;
	temp = temp->next;
	}
	return (NULL);
}
