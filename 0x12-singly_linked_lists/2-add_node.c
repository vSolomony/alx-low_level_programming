#include "lists.h"
/**
 * add_node - new node at begging of list
 * @head: double pointer
 * @str: string
 * Return: address of the new elements
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (head == NULL || ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = _strlen(ptr->str);
	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
