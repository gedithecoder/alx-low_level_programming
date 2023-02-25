#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 if str1 is greater than str2, 0 if they are equal
 * or -1 if str2 is greater than str1
 */

int _strcmp(char *str1, char *str2)
{
	int i = 0;
	int j = 0;
	int len1 = 0;
	int len2 = 0;

	while (str1[i] != '\0')
	{
		len1 += 1;
		i++;
	}

	while (str2[j] != '\0')
	{
		len2 += 1;
		j++;
	}
	
	if (len1 > len2)
		return (1);
	else if (len1 == len2)
		return (0);
	else if (len1 < len2)
		return (-1);
}

