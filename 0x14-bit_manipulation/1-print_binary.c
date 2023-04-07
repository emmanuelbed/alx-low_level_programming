#include "main.h"

/**
* print_binary - prints the binary representation of an unsigned long integer.
* @n: the number to be printed in binary form.
*
* Description: This function recursively prints the binary representation of
* the given number by shifting its bits to the right and printing the least
* significant bit until all bits have been printed.
*
* Return: no return value.
*/
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0'); /* Prints the least significant bit */
	}
	else
	{
		_putchar('0'); /* If n is zero, print '0' */
	}
}
