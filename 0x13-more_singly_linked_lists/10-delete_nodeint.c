#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node of given index
 * @head: double pointer that stores address of head node
 * @index: index of the node
 * Return: 1 if sucess and -1 if fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *to_del
	unsigned int i = 0;
		to_del = NULL;
		temp = *head;
		if (*head == NULL)
			return (-1);

		if (index == 0)
		{
			*head = (*head)->next;
			free(temp);
			return (1);
		}

	while (i < index - 1)
	{
		if (temp == NULL || (temp->next) == NULL)
			return (-1);

			temp = temp->next;
			i++;
	}

	temp->next = to_del->next;
	to_del = temp->next;
	free(to_del);

	return (1);
}
