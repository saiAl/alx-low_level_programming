#include "main.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - function that creates a file.
 * @filename: the file to be created
 * @text_content: is a null terminated string.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);



	if (!text_content)
	{
		fd = open(filename, O_CREAT, S_IRUSR | S_IWUSR);
			if (fd == -1)
				return (-1);
	}
	else
	{
		fd = open(filename, O_CREAT | O_TRUNC | O_APPEND, S_IRUSR | S_IWUSR);
		write(fd, text_content, 2);
	}

	close(fd);
	return (1);
}
