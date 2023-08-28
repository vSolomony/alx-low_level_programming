#include "lists.h"
/**
 * print_listint - printing and returning the list values
 * @h: the header of the list
 * Return: the number of values
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (-1);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
