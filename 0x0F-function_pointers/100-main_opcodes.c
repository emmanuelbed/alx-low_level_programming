#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own function
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: opcodes.
 */
int main(int argc, char *argv[])
{
	int num_of_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_of_bytes = atoi(argv[i]);
	if (num_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	system("gcc 100-main_opcodes.c -c");
	system("objdump -D 100-main_opcodes.o");
	return (0);
}
