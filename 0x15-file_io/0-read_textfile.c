#include "main.h"

/**
*read_textfile - Reads a text file and prints its content
*@filename: Name of the file to be read.
*@letters: Number of letters to read and print.
*Return: The number of letters printed, or 0 if it failed.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
int x, z;
char *buffer;
/* Check if the file name is not null */
if (!filename)
return (0);

/* Open the file in read-only mode */
fd = open(filename, O_RDONLY);
if (fd < 0)
return (0);

/* Allocate memory for the buffer */
buffer = malloc(sizeof(char) * letters);
if (!buffer)
return (0);

/* Read the content of the file into the buffer */
x = read(fd, buffer, letters);
if (x < 0)
{
free(buffer);
return (0);
}
buffer[x] = '\0';

/* Close the file */
close(fd);

/* Write the content of the buffer to the standard output */
z = write(STDOUT_FILENO, buffer, x);
if (z < 0)
{
free(buffer);
return (0);
}

/* Free the buffer */
free(buffer);
return (z);
}
