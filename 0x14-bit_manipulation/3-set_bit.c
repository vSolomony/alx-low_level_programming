#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer of the number
 * @index: the index to switch
 * Return: 1 for success -1 in failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
