#include <stdio.h>
#include "main.h"

/**
 * main - Writes a program that prints its name, followed by a new line.
 * @argc: argument counter
 * @argv: String array of entered arguments including the program name
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{

	printf("%s\n", argv[argc]);

	return (0);
}

