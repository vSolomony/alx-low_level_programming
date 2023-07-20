#include "main.h"
/**
 *print_line - function that draws line
 *@n: is variable
*/
void print_line(int n)
{
	int jojo;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (jojo = 1; jojo <= n; jojo++)
			_putchar('_');
		_putchar('\n');
	}
}
