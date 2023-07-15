#include <stdio.h>
/**
 * main - Entry level
 * Description:prints the lowercase alphabet in reverse
 * Return: Always 0 (sucess)
*/
int main(void)
{
	char lc = 'z';

	while (lc >= 'a')
	{
		putchar(lc);
		lc--;
	}
	putchar('\n');
	return (0);
}
