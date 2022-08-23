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

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t sz;
	int fd;

	if (!filename)
	{
		return (0);
	}
	fd = open(filename, O_RDRW);
	if (fd < 0)
	{
		return (0);
	}
	sz = read(fd, filename, letters);
	close(fd);
	return (sz);
}
