#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long integer to check.
 * @index: The index of the bit to return, where the least bit is at
 * index 0.
 * Return: The value of the bit at the specified index, or -1 if the index is
 * invalid.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;

	/* If the number is 0 and the index is valid, the bit value is 0 */
	if (n == 0 && index < 64)
		return (0);

	while (n > 0)
	{
		if (index == count)
			return (n & 1);

		n >>= 1;
		count++;
	}

	if (index >= count)
		return (-1);

	return (0);
}
