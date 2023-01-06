#include "main.h"

/**
 * _strlen_recursion - print the length of the string
 * @s: the sring to be measured
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

