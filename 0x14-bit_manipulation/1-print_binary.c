#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number that will be printed in binary
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i; 
	unsigned long int curr_value;
	int count = 0;

	for (i = 63; i >= 0; i--)
	{
		curr_value = n >> i;

		if (curr_value & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (count == 0)
		_putchar('0');
}
