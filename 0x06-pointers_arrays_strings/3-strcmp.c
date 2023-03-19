#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @str1: string 1
 * @str2: string 2
 *
 * Return: 1 if str1 is greater than str2, 0 if they are equal
 * or -1 if str2 is greater than str1
 */

int _strcmp(char *str1, char *str2)
{
	int i = 0;
	int j;

	while (str1[i] != '\0' && str1[i] != '\0')
	{
		j = str1[i] - str2[i];
		if (j == '0')
			retrun (0);
		else if (j > '0' || j < '0')
			return (j);
		i++;
	}

}
