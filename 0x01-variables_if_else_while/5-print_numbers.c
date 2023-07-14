#include <stdio.h>
/**
 * main - Entry level
 * Description: program that prints all single digit numbers of base 10
 * Return: Always 0 (sucess)
*/
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
	printf("%d", n);
	n++;
	}
	printf("\n");
	return (0);
}
