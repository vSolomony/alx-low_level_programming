#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: array
 * @c: char
 * Return: dest
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s >= '\0'; i++)
	{
	if (s[i] == c)
	return (s + i);
	}
	return (NULL);
}
