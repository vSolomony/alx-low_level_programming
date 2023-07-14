#include <stdio.h>
/**
 * main - Entry level
 * Description: prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0 (sucess)
*/
int main(void)
{
	char a, A;

	for (a = 'a' ; a <= 'z' ; a++)
	{
	putchar(a);
	}
	for (A = 'A' ; A <= 'Z' ; A++)
	putchar(A);
	}
	putchar('\n');
	return (0);
}
