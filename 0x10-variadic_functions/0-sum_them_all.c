#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - return sum of param
 * @n: is unsigned int
 * Return: 0 if n = 0 or the sum of fun = sucess
*/
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	va_list lss;

	va_start(lss, n);

	int i, sum = 0;

	for (i = 0; i < n; i++)
		sum +=	va_arg(lss, unsigned int);

	va_end(lss);
	return (sum);
}
