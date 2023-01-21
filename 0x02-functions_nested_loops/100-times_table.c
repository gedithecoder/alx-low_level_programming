#include <stdio.h>

#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * If n is greater than 15 or less than 0 the function
 * should not print anything
 * @n: number of times table
 *
 */

void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 25)
	{

		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if (b == 0 && c == 0)
				{
					printf("%d", c);
				}
				else if (b >= 1 && c < 10)
				{
					printf(",   %d", c);
				}
				else if (b >= 1 && c >= 10 && c < 100)
				{
					printf(",  %d", c);
				}
				else if (b >= 1 && c >= 100)
				{
					printf(", %d", c);
				}
			}
			printf("\n");
		}
	}
}
