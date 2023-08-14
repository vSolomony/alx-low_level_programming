#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: is a pointer variable
 * Return: nothing
 * Description: print dog
*/
void print_dog(struct dog *d)
{
	if (d)
	{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
