#include "lists.h"
/**
 * add_node_end - new node at end of list
 * @head: double pointer
 * @str: string.
 * Return: aderss of new node or null if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = *head;
	list_t *tmp = malloc(sizeof(list_t));

	if (head == NULL || ptr == NULL || tmp == NULL)
		return (NULL);

	tmp->str = strdup(str);
	tmp->len = strlen(tmp->str);
	tmp->next = NULL;

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = tmp;
	return (tmp);
}
