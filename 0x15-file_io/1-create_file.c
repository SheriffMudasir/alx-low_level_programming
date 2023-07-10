#include "main.h"
#include <stdio.h>

/**
 * create_file - This function creates a file.
 * @filename: The name of the file to create.
 * @text_content: The NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int p;
	int write_number = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (write_number = 0; text_content[write_number];)
			write_number++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	p = write(fd, text_content, write_number);

	if (fd == -1 || p == -1)
		return (-1);

	close(fd);

	return (1);
}
