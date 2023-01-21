#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * of the three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 *
 * Return: 0
 */

int main(void)
{
	int a = 0;
	int b, c;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (a < b && b < c && a != b && b != c)
				{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (a + b + c != 24)
				{
				putchar(',');
				putchar(' ');
				}
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}

