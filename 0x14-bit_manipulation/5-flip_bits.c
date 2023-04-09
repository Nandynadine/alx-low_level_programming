#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n with.
 *
 * Return: The required number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusi_or = n ^ m,  bits = 0;

	while (exclusi_or > 0)
	{
		bits += (exclusi_or & 1);
		exclusi_or >>= 1;
	}

	return (bits);
}
