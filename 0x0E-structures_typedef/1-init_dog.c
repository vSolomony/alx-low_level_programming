#include "dog.h"
/**
 * init_dog - function that initialize
 * @d: pointer holds address of struct
 * @name: pointer of string
 * @age: variable of type float
 * @owner: pointer of string
 * Return: nothing
 * Description: just initalizing struct
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	(*d).age = age;
	(*d).owner = owner;
}
