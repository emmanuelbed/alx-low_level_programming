#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if an error occurs
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
		i++;
	}

	return (dec_val);
}

