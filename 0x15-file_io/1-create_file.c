#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

#include <unistd.h>
#include <string.h>

/**
 * create_file - creates a new file
 * @filename: the filename of the new file
 * @text_content: the text to save in the file
 *
 * Return: 1 if success -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	write(fd, text_content, strlen(text_content) + 1);
	close(fd);
	return (1);
}
