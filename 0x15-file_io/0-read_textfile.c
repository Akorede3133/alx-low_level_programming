#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * read_textfile - read text
 * @filename: file name
 * @letters: letters
 * Return: int
 */

ssize_t read_textfile(char *filename, size_t letters)
{
	size_t sz;
	int fd;

	fd = open(filename, O_RDRW);
	if (fd < 0)
	{
		return (0);
	}
	else
	{
		sz = read(fd, filename, letters);
		return (sz);
	}
}
