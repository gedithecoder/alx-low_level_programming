#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @a: the number whose last digit is to be printed
 *
 * Return: 0
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;

	if (b > 0)
	{	
		putchar('0' + b);
	}
	else if (b == 0)
	{
	
		putchar('0' + b);
	}
	else if (b < 0)
	{
		b = b * -1;
	
		putchar('0' + b);
	}
	
	return (b);
}
