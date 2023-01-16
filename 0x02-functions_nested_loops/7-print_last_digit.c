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


	if (a > 0)
	{	
		b = a % 10;
		putchar('0' + b);
	}
	else if (a == 0)
	{
		b = 0;
		putchar('0' + b);
	}
	else
	{
		b = (a % 10) * -1;
		putchar('0' + b);
	}
	
	return (b);
}
