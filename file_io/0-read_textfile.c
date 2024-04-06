#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - read text from a file
 * @filename: name of the file to be read
 * @letters: number of characters in the file
 * Return: the number of letters read or return 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int count, fd;
	const char *content = malloc(letters * sizeof(letters));

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 1)
		return (0);
	count = read (fd, content, letters);
	write(STDOUT_FILENO, content, count);
	return (count);
}

