#include <stdio.h>

/**
 * main - Writes a program that prints its name, followed by a new line.
 * @argc - argument counter
 * @argv - String array of entered arguments including the program name
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int count = argc;
	while (count < 2)
	{
		printf("%s\n", argv[0]);
		count++;
	}

	return (0);
}

