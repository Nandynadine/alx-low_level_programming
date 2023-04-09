#include "main.h"

/**
 * get_endianness - checks if multibyte data is stored as little or big endian
 * Return: first value stored, 0 if big endian, 1 if little
 */
int get_endianness(void)
{
	int number = 1;
	char *endian = (char *)&number;

	if (*endian == 1)
		return (1);

	return (0);
}
