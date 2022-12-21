#include "main.h"
/**
 * _strcpy - copier el contenido de uno a otra varible
 * @dest: This is destiny
 * @src: this is the copia
 *
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
