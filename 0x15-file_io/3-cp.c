#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUF 1024

/**
 * main - Entry point
 * @argc: number of command-line arguments
 * @argv: arguments.
 * Return:  0.
 */

int main(int argc, char *argv[])
{
	int from_fd, to_fd;
	ssize_t buff[BUF];

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to");
		exit(100);
	}

	from_fd = open(argv[1], O_RDONLY);

	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if ((read(from_fd, buff, BUF)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_fd = open(argv[2], O_CREAT | O_TRUNC | O_RDWR,
					S_IRUSR | S_IWUSR |
					S_IRGRP | S_IWGRP |
					S_IROTH);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[2]);
		exit(99);
	}

	if ((write(to_fd, buff, BUF)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[2]);
		exit(99);
	}
	if (close(from_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
	if (close(from_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
	return (0);
}
