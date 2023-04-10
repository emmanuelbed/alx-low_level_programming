#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append the text to
 * @text_content: content to append into the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int file_disc, u, r = 0;

if (!filename)
return (-1);
file_disc = open(filename, O_WRONLY | O_APPEND);
if (file_disc < 0)
return (-1);
if (text_content)
{
for (; text_content[r]; r++)
;
u = write(file_disc, text_content, r);
if (u != r)
{
close(file_disc);
return (-1);
}
}

close(file_disc);

return (1);
}

