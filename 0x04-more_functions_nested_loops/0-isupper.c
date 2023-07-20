#include "main.h"
/**
 * _isupper - checking upper case
 * @c: variable
 * Return: 1 if its upper, 0 if not
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
