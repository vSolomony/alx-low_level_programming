#include <stdio.h>
/**
* main - Entry level
* Description:prints the alphabet in lowercase
* Return: Always 0 (sucess)
*/
int main(void)
{
	char lc = 'a';

	while (lc <= 'z')
	{
		if (lc == 'e' || lc == 'q')
		{
		lc++;
		continue;
		}
	putchar(lc);
	lc++;
	}
	putchar('\n');
	return (0);
}
