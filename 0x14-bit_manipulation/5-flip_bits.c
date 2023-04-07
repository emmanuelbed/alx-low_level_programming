#include "main.h"

/**
*flip_bits - returns the number of bits you would need to flip
*to get from one number to another.
*@n: number one.
*@m: number two.
*Return: number of bits.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int number_of_bits = 0;

while (n || m)
{
if ((n & 1) != (m & 1))
number_of_bits++;
n >>= 1;
m >>= 1;
}

return (number_of_bits);
}






