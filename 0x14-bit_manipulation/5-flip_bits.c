#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: 1st number
 * @m: 2nd number
 * Return: number that change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int curr_value;
	unsigned long int exclusv = n ^ m;
	int count = 0;

	for (i = 63; i >= 0; i--)
	{
		curr_value = exclusv >> i;
		if (curr_value & 1)
			count++;
	}

	return (count);
}
