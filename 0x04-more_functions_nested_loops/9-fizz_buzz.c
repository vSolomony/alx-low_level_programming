#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nm;

	for (nm = 1; nm <= 100; nm++)
	{
	if (nm % 3 == 0 && nm % 5 == 0)
	{
		char a[15] = "FizzBuzz";

		printf("%s ", a);
		continue;
	}
	else if (nm % 3 == 0)
	{
		char b[15] = "fizz";

		printf("%s ", b);
		continue;
	}
	else if (nm % 5 == 0)
	{
	char z[15] =  "buzz";

	printf("%s ", z);
	continue;
	}
		printf("%d ", nm);
	}
	return (0);
}
