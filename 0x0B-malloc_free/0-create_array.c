#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 * @size: size of memory that allocates an array
 * @c: a charater that initializes the array
 *
 * Return: NULL if size = 0 or a pointer to the array, or NULL
 * if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *a = (char *)malloc((size + 1) * sizeof(c));
	unsigned int b = 0;

	if (size == 0)
	{
		return (NULL);
	}
	while (b < size)
	{
		a[b] = c;
		b++;
	}

	return (a);
}
