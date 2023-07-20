#include "main.h"
/**
 *print_diagonal - draws diagonal line
 *@n: integer
 *Return: Always 0 (sucess)
*/
void print_diagonal(int n)
{
	int jojo, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (jojo = 1; jojo <= n; jojo++)
		{
			for (space = 1; space <= jojo; space++)
				_putchar(' ');
			_putchar(92);
		}
		_putchar('\n');
	}
}
