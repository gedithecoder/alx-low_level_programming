#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - print hours upto 23:59
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int a;
	int b;

	a = 0;

	while (a < 24)
	{
		b = 0;
		while (b < 60)
		{
		printf("%02d:%02d", a, b);
		printf("\n");
		b++;
		}
		a++;
	}
}
