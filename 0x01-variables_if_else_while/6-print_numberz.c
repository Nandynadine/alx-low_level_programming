#include <stdio.h>

/**
 *main - print 0123456789 using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	putchar('\n');

	return (0);
}
