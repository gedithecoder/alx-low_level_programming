#include <stdio.h>

#include <stdlib.h>

/**
 * main - Write a program that prints the first 50
 * Fibonacci numbers, starting with 1 and 2, followed
 * by a new line.
 *
 * Return: 0
 */

int main(void)
{
	long int num1, num2, num3;
	int a;
	num1 = 1;
	num2 = 2;
	num3 = num1 + num2;
	a = 3;

	printf("%ld, %ld, ", num1, num2);
	while (a <= 50)
	{
		printf("%ld", num3);
		num1 = num2;
		num2 = num3;
		num3 = num1 + num2;
		if (a != 50)
		{
			printf(", ");
		}
		++a;
	}
	printf("\n");
	return (0);
}
