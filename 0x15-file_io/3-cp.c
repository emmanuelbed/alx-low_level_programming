#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int read_file, write_file, get_status, close_it_1, close_it_2;
char buffer[BUFSIZ];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
read_file = open(argv[1], O_RDONLY);
if (read_file < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

write_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((get_status = read(read_file, buffer, BUFSIZ)) > 0)
{
if (write_file < 0 || write(write_file, buffer, get_status) != get_status)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(read_file);
exit(99);
}
}

if (get_status < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

close_it_1 = close(read_file);
close_it_2 = close(write_file);

if (close_it_1 < 0 || close_it_2 < 0)
{
if (close_it_1 < 0)
dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", read_file);
if (close_it_2 < 0)
dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", write_file);

exit(100);
}

return (0);
}
