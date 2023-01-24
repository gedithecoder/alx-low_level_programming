#include "main.h"

/**
 * more_numbers - function that prints 10 times the number, from 0 to 14
 * _putchar only 3 times
 *
 * Return: 0-14 10 times
 */

void more_numbers(void)
{
	int a, b;

	a = 0;

	while (a <= 10)
	{
		b = 0;
		while (b < 15)
		{
			_putchar(b + '0');
			b++;
		}
		_putchar('\n');
		a++;
	}
	_putchar('\n');
}

