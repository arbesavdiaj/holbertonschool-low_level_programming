#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * append_text_to_file - function
 * @filename: filename
 * @text_content: text_content
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		if (write(fd, text_content, strlen(text_content)) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
