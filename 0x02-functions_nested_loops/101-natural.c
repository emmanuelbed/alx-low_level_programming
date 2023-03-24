#include <stdio.h>

/**
 * main - Prints natural numbers multiplies of 3 or 5
 *
 * Return: 0 Always
 */

int main(void)
{
	int counter, result;

	for (counter = 1; counter < 1024; counter++)
	{
		if ((counter % 3) == 0 || (counter % 5) == 0)
		{
			result = result + counter;
		}
	}

	printf("%d\n", result);

	return (0);
}
