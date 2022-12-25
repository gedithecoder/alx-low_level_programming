#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0-9
 *
 * Return: 0-9 except 2 and 4
 */

void print_most_numbers(void)
{
	char c;

	for (i = 0; i <= 9; c++)
	{
		if (!(i == 2) || ((i == 4))
		_putchar(c);
	}
	_putchar('\n');
}
