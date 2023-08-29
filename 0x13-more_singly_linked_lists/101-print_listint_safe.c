#include "list.h"
/**
 * print_listint_safe - print safe
 * @head: head pointer
 * Return: num
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;

	while (head != NULL)
	{
		head = head->next;
		num++;
	}
	return (num);
}
