#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap the values of two int
 * @a : int 1
 * @b : int 2
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = *tmp;
}
