#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int track = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;
	int i = 0;

	while (i < 64)
	{
		current = exclusive >> i;

		if (current & 1)
			track++;

		i++;
	}

	return (track);
}

