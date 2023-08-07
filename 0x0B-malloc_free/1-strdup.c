#include "main.h"
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *@str: a pointer of char
 *Return: Always 0 sucess
*/
char *_strdup(char *str)
{
	char *p;
	unsigned int size = 0;
	unsigned int i;

	if (str == 0)
		return (NULL);
	while (str[size] != '\0')
		size++;

	p = malloc(size * sizeof(char) + 1);

		if (p == 0)
		return (NULL);

		for (i = 0; i < size; i++)
		{
			p[i] = *str;
			str++;
		}
		return (p);
}
