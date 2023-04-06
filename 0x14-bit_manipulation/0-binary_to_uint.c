#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;
	int length = 0, base_two = 1;

	if (!b)
		return (0);

	while (b[length] != '\0')
		length++;

	length--;

	while (length >= 0)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		if (b[length] & 1)
			ui += base_two;

		base_two *= 2;
		length--;
	}

	return (ui);
}

