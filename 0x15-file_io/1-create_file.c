#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_CREAT | O_WRONLY, 0600);
}
