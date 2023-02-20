#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print digit number of base 10
 * starting from 0 using putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar((number % 10) + '0');
		number++;
	}
	putchar('\n');

	return (0);
}
