#include "main.h"
/**
 *more_numbers - prints 10 times the functions
 *Return: Always 0 (Sucess)
*/
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
				_putchar(j % 10 + 48);
		}
	_putchar('\n');
	}
}
