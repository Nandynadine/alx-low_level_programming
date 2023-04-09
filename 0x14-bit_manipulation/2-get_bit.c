#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The bit.
 * @index: The index to get the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int bit_range;

	/* Check whether index is not out of range */
bit_range = (sizeof(unsigned long int) * 8);
	if (index > bit_range)
		return (-1);

	/* shift number index places right to find bit */
	bit = ((n >> index) & 1);

	return (bit);
}
