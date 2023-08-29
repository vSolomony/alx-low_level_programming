#include "lists.h"
/**
 * sum_listint - sum of node values
 * @head: pointer of head node
 * Return: the sum of values
*/
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
		return (sum);
}
