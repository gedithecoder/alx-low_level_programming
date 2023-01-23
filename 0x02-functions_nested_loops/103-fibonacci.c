#include <stdio.h>

#include <stdlib.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * in the Fibonacci sequence whose values do not exceed
 * 4,000,000 followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	long int num1, num2,  num3, sum;

	num1 = 0;
	num2 = 1;
	num3 = num1 + num2;
	sum = 0;

	while (num3 < 4000000)
	{
		num1 = num2;
		num2 = num3;
		num3 = num1 + num2;
		if ((num3 % 2) == 0)
		{
			sum += num3;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
