#include "main.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - function that reads a text file to stdout.
 * @filename: file with the content to read.
 * @letters: number of char in the file
 * Return: number of bytes write to STDOUT_FILENO, 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t *buff, bytes = 0;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(ssize_t) * letters + 1);
	bytes =	read(fd, buff, letters);
	buff[bytes] = '\0';

	write(STDOUT_FILENO, buff, bytes);

	free(buff);
	return (bytes);
}
