#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 1 at a given index.
 * @n: pointer of the number
 * @index: the index of value to change
 * Return: 1 for success or -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
