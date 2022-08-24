#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

#include <unistd.h>

/**
 * _strlen - gets the string length
 * @string: the string to evaluate the length;
 *
 * Return: string length
 */
int _strlen(char *string)
{
	int len = 0;

	while (string[len] != '\0')
	{
		len += 1;
	}

	return (len);
}

/**
 * append_text_to_file - appends text to a file
 * @filename: the filename of the file
 * @text_content: the text to append
 *
 * Return: 1 if success -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	wr = write(fd, text_content, _strlen(text_content) + 1);
	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
