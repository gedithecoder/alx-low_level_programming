#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 *
 * Return: 0
 */

int main(void)
{
	int a = 0;
	int b;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			if (a != b && a < b)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (a + b != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}


