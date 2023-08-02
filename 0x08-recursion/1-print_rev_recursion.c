#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 *
 * @s: is a pointer of char
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\n')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
		_putchar('\n');
}