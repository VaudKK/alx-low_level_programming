#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * close_fd - closes a file descriptor
 * @fd: the file descriptor
 */
void close_fd(int fd)
{
	int closed;

	closed = close(fd);

	if (closed == -1)
	{
		printf("Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - the main method
 * @argc: the argument count
 * @argv: the argument values
 *
 * Return: 0 if success otherwise fail
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, read_bytes;
	char buffer[1024];

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_APPEND | O_RDWR, 0664);
	if (fd_to == -1)
	{
		printf("Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (1)
	{
		read_bytes = read(fd_from, buffer, 1024);
		if (read_bytes < 1024)
		{
			buffer[read_bytes] = '\0';
			write(fd_to, buffer, read_bytes);
			break;
		}
		write(fd_to, buffer, read_bytes);
	}
	close_fd(fd_from);
	close_fd(fd_to);
	return (0);
}
