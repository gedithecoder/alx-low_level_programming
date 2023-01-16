#include <stdio.h>
#include "main.h"

/**
 * times_table - print the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int a = 0;
	int b;
	int c;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = a * b;
			printf("%d, ", c);
			b++;
		}
		printf("\n");
		a++;
	}
}

