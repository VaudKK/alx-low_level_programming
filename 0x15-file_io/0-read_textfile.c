#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints to console
 * @filename: the name of the file
 * @letters: the number of characters to print
 *
 * Return: the no of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf = malloc(sizeof(size_t) * letters);
	ssize_t written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	read(fd, buf, letters);
	buf[letters + 1] = '\0';

	written = write(0, buf, letters);
	close(fd);

	if (written == -1)
		return (0);

	if (written != (ssize_t)letters)
		return (0);

	free(buf);
	return (written);
}
