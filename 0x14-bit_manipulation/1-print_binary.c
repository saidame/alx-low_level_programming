#include "main.h"

/**
 * print_binary - prints a number as binary string
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, printed = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
