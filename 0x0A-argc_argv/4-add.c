#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check if string contains interges
 * @str: array str
 *
 * Return: Always 0 (Success)
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - adds two positive numbers
 * @argc: argument counter
 * @argv: String array of arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum;

	count = 1;

	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);

	return (0);
}
