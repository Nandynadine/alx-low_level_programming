#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: A pointer to string of 0 and 1 characters.
 *
 * Return: If b is NULL or contains characters that are not 0 or 1 - 0.
 *         Otherwise - the converted number in base 10.
 */
unsigned int binary_to_uint(const char *b)
{

	int len = 0, i;
	unsigned int number = 0;

	if (b == NULL)
		return (0);

	/* find string length */
	while (b[len] != '\0')
		len++;
	len -= 1;

	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);

		if (b[i] == '1')
			number += (1 * (1 << len));
		i++;
		len--;
	}

	return (number);
}
