#include "main.h"

/**
 * get_endianness - Checks thendianness.
 *
 * Return: If big-endin-0.
 * If little-endin-1.
 */

int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);
	return (0);
}
