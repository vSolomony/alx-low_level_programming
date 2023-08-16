#include "function_pointers.h"
/**
 * print_name - func to print name
 * @name: pointer that stores name
 * @f: fuction pointer
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
