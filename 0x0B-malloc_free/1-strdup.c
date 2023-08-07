#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *@str: a pointer of char
 *Return: Always 0 sucess
*/
char *_strdup(char *str)
{
	char *p;
	unsigned int size;
	unsigned int i;

	size = strlen(str);
	p = malloc(sizeof(char) * size);
		if (size == 0 || p == 0 || str == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
		{
			p[i] = *str;
			str++;
		}
		return (p)
}
