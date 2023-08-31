#include "main.h"

/**
 * flip_bits - number of bits needed to change from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current_bit;
	unsigned long int differing_bits = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current_bit = differing_bits >> i;
		if (current_bit & 1)
			count++;
	}

	return (count);
}
