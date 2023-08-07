#include "main.h"
#include <stdlib.h>
/**
 *create_array - array of chars, and initializes it with a specific char
 *@size: int vairable
 *@c: char variable
 *Return: Always 0 Sucess
*/
char *create_array(unsigned int size, char c)
{
	char *p;
	int i;

	p = (char *)malloc(sizeof(char) * size);
	if (size == 0 || p == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
