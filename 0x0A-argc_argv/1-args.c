#include <stdio.h>

/**
 * main - Writes a program that prints the number of
 * arguments passed into it.
 * Your program should print a number, followed by a new line
 * @argc: argument counter
 * @argv: String array of arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
