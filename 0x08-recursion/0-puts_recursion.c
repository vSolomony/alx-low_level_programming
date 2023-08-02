#include "main.h"

/**
 * _puts_recursion - check the code
 *
 * @s: a pointer of char
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
