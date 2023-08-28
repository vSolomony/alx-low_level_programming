#include "lists.h"
/**
 * free_listint - free nodes
 * @head: head pointer of node
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
		{
		temp = head->next;
		free(head);
		head = temp;
		}
}
