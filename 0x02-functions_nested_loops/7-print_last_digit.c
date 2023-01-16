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

	printf("%d", b);
	return (b);
}
