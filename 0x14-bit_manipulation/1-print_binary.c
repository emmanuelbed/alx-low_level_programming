#include "main.h"

/**
 * print_binary - prints the binary representation of an unsigned long integer.
 * @n: the number to be printed in binary form.
 *
 * Description: This function iteratively prints the binary representation of
 * the given number by masking each bit and printing '0' or '1' accordingly.
 *
 * Return: no return value.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);

	while (mask)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}

	_putchar('\n');
}
