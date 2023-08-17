#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true |else -1
 * @array: array
 * @size: size of
 * @cmp: pointer to func
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array == NULL || size == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
