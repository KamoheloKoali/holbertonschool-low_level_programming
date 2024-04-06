#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 *  append_text_to_file- append text to a file
 * @filename: name of the file to be read
 * @text_content: text to be appended
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND);
	if (fd < 0)
	{
		close(fd);
		return (-1);
	}
	if (text_content == NULL)
		close(fd);
	for (count = 0; text_content[count]; count++)
		;
	write(fd, text_content, count);
	close(fd);
	return (1);
}

