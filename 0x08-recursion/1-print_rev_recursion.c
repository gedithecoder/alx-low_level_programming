#include "main.h"

/**
 * _puts_rev_recursion - prints a string in reverse
 * @s: The string to be printed
 *
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_rev_recursion(s + 1);
		_putchar(*s);
	}

}
