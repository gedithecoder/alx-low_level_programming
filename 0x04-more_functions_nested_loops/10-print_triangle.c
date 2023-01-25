#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 * @size: the size of the triangle
 *
 */

void print_triangle(int size)
{
	int a, b, c, j, k, x;
	
	a = 0;
	b = 1;
	j = 1;
	x = 0;
	if (size > 0)
	{
		while (x < size)
		{
			c = a + b;
			while (c < size)
			{
				_putchar(' ');
				c++;
			}
			k = size - j;
			while (k < size)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			a++;
			j++;
			x++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
