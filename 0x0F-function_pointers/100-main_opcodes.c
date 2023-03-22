#include <stdlib.h>
#include <stdio.h>

/**
 *main - a
 *@argc: a
 *@argv: a
 *
 *Return: a
 */
int main(int argc, char *argv[])
{
	int num_of_bytes;

	if (argc != 2)
	{
		printf("Error");
		exit(1);
	}
	num_of_bytes = atoi(argv[1]);
	if (num_of_bytes < 0)
	{
		printf("Error");
		exit(2);
	}
	system("gcc 100-main_opcodes.c -c");
	system("objdump -D 100-main_opcodes.o");
	return (0);
}
