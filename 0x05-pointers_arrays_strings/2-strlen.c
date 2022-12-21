#include "main.h"
#include <string.h>
/**
 * _strlen -> functiion to get the length of string
 * @s: string pointer to passed to this function
 * Return: return length of the string
 */

int _strlen(char *s)
{
int index;

for (index = 0; s[index] != '\0' ; index++)
	;
return (index);
}
