#include "main"
/**
 *print_sign - prints the sign of a number
 * @n: number of sign
 *Return: Alawys 0
*/
int print_sign(int n)
{
	if (n > 0)
		return (1);
		_printchar('+');
	if (n == 0)
		return (0);
		_printchar('0');
	if (n < 0)
		return (-1);
		_printchar('-');
}
