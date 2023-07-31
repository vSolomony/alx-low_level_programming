#include "main.h"
#include <string.h>
/**
 * _strchr - function that locates a character in a string
 * @s: array
 * @c: char
 * Return: dest
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	int j = strlen(s);

	for (i = 0; i < j; i++)
	{
	if (s[i] == c)
	return (s + i);
	}
	return (NULL);
}
