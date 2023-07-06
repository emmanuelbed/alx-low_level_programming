#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @num: number to search
 * @idx: index of the bit
 *
 * Return: value of the bit at the specified index
 */
int get_bit(unsigned long int num, unsigned int idx)
{
	if (idx > 63)
		return (-1);

	int bit_value = (num >> idx) & 1;

	return (bit_value);
}
