#include <stdlib.h>
#include "function_pointers.h"

/**
 * array iterator - executes a function gives as a parameter
 * on each element of an array
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	while (i < size)
	{
		i = 0;
		action(array[i]);
		i++;
	}
}
