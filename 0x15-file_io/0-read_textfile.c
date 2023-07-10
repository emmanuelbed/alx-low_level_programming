#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: actual number, 0 when function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t file_dir, w, t;

	if (!filename)
		return (0);

	file_dir = open(filename, O_RDONLY);
	switch (file_dir)
	{
		case -1:
			return (0);
		default:
			break;
	}

	buf = malloc(sizeof(char) * letters);
	switch (buf != NULL)
	{
		case 0:
			close(file_dir);
			return (0);
		default:
			break;
	}

	t = read(file_dir, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(file_dir);

	return (w);
}

