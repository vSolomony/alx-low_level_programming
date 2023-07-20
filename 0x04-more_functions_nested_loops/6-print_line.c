include "main.h"
/**
 *print_line - function that draws line
 *@n: is variable
 *Return: Always 0 (sucess)
*/
int void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int ch;

	for (ch = 1; ch <= n; ch++)
		_putchar(95);
	_putchar('\n');
	}
}
