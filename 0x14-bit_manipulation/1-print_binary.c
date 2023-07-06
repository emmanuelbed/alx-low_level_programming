#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @num: number to print in binary
 */
void print_binary(unsigned long int num)
{
	if (num == 0)
	{
		_putchar('0');
		return;
	}

	int i = 0;
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);

	while (!(mask & num))
		mask >>= 1;

	while (mask)
	{
		_putchar((num & mask) ? '1' : '0');
		mask >>= 1;
	}
}

