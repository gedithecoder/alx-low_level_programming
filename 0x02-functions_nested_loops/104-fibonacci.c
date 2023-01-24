#include <stdio.h>
#include <limits.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	LONG_MAX a;
	LONG_MAX b;
	LONG_MAX c;

	int d;

	a = 1;
	b = 2;
	c = a + b;
	d = 3;

	printf("%ld, %ld, ", a, b);
	while (d <= 98)
	{
		printf("%ld", c);
		if (d != 98)
		{
			printf(", ");
		}
		a = b;
		b = c;
		c = a + b;
		d++;
	}
	printf("\n");
	return (0);
}

