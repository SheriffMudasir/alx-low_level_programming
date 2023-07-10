#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - This function reads a text file and
 * prints it to the POSIX standard output.
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: The actual number of letters read and printed
 * or 0 if the file cannot be read or opened
 * or 0 if the file name is NULL
 * or 0 if it fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t read_number;
	ssize_t write_number;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters + 1));
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	read_number = read(fd, buff, letters);
	if (read_number == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	write_number = write(STDOUT_FILENO, buff, read_number);
	if (write_number == -1 || write_number != read_number)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);

	return (write_number);
}
