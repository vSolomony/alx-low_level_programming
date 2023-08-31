#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: the number
 * @index: the selected index
 * Return: the value of the selected index of number
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value_selcetion;

	if (index > 63)
		return (-1);

	value_selection = (n >> index) & 1;

	return (value_selection);
}

