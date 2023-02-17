#include <stdio.h>

/**
 *main - print 0123456789
 *Return: Always 0 (Success)
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%i", number);
		number++;
	}
	putchar('\n');

	return (0);
}
