#include "main.h"

/**
 * _strlen_recursion - cfunction that returns the length of a string.
 * @s: pointer of a char
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s > '\0')
	{
		i++;
	i = i +  _strlen_recursion(s + 1);
	}
	return (i);
}
