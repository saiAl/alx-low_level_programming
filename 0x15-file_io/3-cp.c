#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER 1024

/**
 * main - Entry point
 * @argc: number of command-line arguments
 * @argv: arguments.
 * Return:  0.
 */

int main(int argc, char *argv[])
{
	int from_fd, to_fd;
	ssize_t r_bytes, w_bytes;
	char buffer[BUFFER];

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

	to_fd = open(argv[2], O_CREAT | O_TRUNC | O_RDWR | O_APPEND,
					S_IRUSR | S_IWUSR |
					S_IRGRP | S_IWGRP |
					S_IROTH);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[2]);
		exit(99);
	}


	while (r_bytes > 0)
	{
		r_bytes = read(from_fd, buffer, BUFFER); 
		
		if (r_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		if (r_bytes > 0)
		{
			w_bytes = write(to_fd, buffer, r_bytes); 
			while (w_bytes != r_bytes)
			{
				if (w_bytes == -1)
				{
					dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[2]);
					exit(99);
				}
				w_bytes += write(to_fd, buffer + w_bytes, r_bytes - w_bytes);
			}
		}

	}
	if (close(from_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
		exit(100);
	}
	if (close(to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
		exit(100);
	}
	return (0);
}
