#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - updates value it points to 98
 * @n: is a pointer variable
 * Return: Nothing
*/
void reset_to_98(int *n)
{
	int *p = &n;
	*p = 98;
}
