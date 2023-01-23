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
	long int num1, num2,  num3, sum, k;

	num1 = 1;
	num2 = 2;
	num3 = num1 + num2;
	k = 0;

	while (k < 4000000)
	{
		if ((num3 % 2) == 0 && num3 <= 4000000)
		{
			sum += num3;
		}
		num1 = num2;
		num2 = num3;
		num3 = num1 + num2;
		k++;
	}
	sum += 2;
	printf("%ld\n", sum);
	return (0);
}
