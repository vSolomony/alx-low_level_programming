#include "lists.h"
/**
 * listint_len - returning node count
 * @h: the header of the list
 * Return: the number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
