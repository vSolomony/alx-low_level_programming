#include <stdio.h>
/**
* main - Entry level
* Description: Numberz of chars
* return: Always 0 (sucess)
*/
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
