#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz. For numbers which are
 * multiples of both three and five print FizzBuzz.
 * Each number or word should be separated by a space
 *
 * Return: 0
 */

int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if ((a % 3) == 0 && (a % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((a % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((a % 5) == 0)
		{
			printf("Buzz");
			if (a != 100)
			{
				printf(" ");
			}
		}
		else
		{
			printf("%d ", a);
		}
		a++;
	}
	printf("\n");
	return (0);
}
