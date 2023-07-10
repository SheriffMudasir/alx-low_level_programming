#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *c_buff(char *file);
void c_file(int fd);

/**
 * c_buff - This function allocates 1024 bytes for a buffer.
 * @file: The name of the file of char stored in buffer.
 *
 * Return: A pointer to a buffer.
 */
char *c_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * c_file - This functi0on closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void c_file(int fd)
{
	int ch;

	ch = close(fd);

	if (ch == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - This function copies the contents of a file to another file.
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 if successfull.
 *
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_number, write_number;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = c_buff(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	read_number = read(fd_from, buff, 1024);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fd_from == -1 || read_number == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		write_number = write(fd_to, buff, read_number);
		if (fd_to == -1 || write_number == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		read_number = read(fd_from, buff, 1024);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_number > 0);

	free(buff);
	c_file(fd_from);
	c_file(fd_to);

	return (0);
}
