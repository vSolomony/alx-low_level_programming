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
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->age == NULL)
		d->age = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
