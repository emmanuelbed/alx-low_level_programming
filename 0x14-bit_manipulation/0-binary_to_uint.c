#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @binary: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *binary)
{
	if (!binary)
		return (0);

	unsigned int decimal_value = 0;
	int i = 0;

	while (binary[i])
	{
		if (binary[i] != '0' && binary[i] != '1')
			return (0);
		decimal_value = (decimal_value * 2) + (binary[i] - '0');
		i++;
	}

	return (decimal_value);
}

