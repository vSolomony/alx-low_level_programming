#include "lists.h"
/**
 * pop_listint - delete first head
 * @head: pointer of head that holds address
 * Return: value of n
*/
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int i;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	i = (*head)->n;
	*head = temp->next;
	free(temp);

	return (i);
}
