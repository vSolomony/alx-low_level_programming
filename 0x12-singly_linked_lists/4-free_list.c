#include "lists.h"
/**
 * free_list - free the link list.
 * @head : head that will be freed
 */
void free_list(list_t *head)
{
		list_t *ptr;

		while (head != NULL)
		{
			ptr = head->next;
			free(head->str);
			free(head);
			head = ptr;
		}
}

