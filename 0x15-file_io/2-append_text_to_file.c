#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * append_text_to_file - This function appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The string to append.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
        int fd, write_number = 0;

        if (filename == NULL)
                return (-1);

        fd = open(filename, O_WRONLY | O_APPEND);
        if (fd == -1)
                return (-1);

        if (text_content != NULL)
        {
                while (text_content[write_number])
                        write_number++;

                if (write(fd, text_content, write_number) != write_number)
                {
                        close(fd);
                        return (-1);
                }
        }

        close(fd);
        return (1);
}