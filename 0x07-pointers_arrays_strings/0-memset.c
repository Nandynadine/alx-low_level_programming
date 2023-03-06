#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte @c.
 * @s: pointer to the destination object
 * @c: value to be filled with
 * @n: Number of bytes to be filled starting from s to be filled.
 * Return: The memset function returns the value of s.
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
