#include "main.h"

/**
 * print_binary - Prints the binary representation of a decimal number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	int i, bit_count = 0;
	unsigned long int current_bit;

	for (i = 63; i >= 0; i--)
	{
		current_bit = n >> i;

		if (current_bit & 1)
		{
			_putchar('1');
			bit_count++;
		}
		else if (bit_count)
		{
			_putchar('0');
		}
	}
	if (!bit_count)
	{
		_putchar('0');
	}
}
