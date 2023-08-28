#include "lists.h"
/**
 * print_listint - printing and returning the list values
 * @h: the header of the list
 * Return: the number of values
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *store;

	if (h == NULL)
		return (-1);
	store = h->next;
	printf("%d\n", h->n);
	printf("%d\n", store->n);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
