#include <stdio.h>
#include <stdlib.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	unsigned long long int a, b, c;
	int d;

	a = 1;
	b = 2;
	c = a + b;
	d = 3;

	printf("%llu, %llu, ", a, b);
	while (d <= 98)
	{
		printf("%llu", c);
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

