#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all digit numbers of base 16 in lowercase
 * using putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int number = 0;
	char alpha = 'a';

	while (number < 10) /*print 0-9*/
	{
		putchar((number % 10) + '0');
		number++;
	}

	while (alpha <= 'f') /*print a-f to finish hexbase*/
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);
}
