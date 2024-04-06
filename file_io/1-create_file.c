#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - create with permissions rw-------
 * @filename: name of the file
 * @content: what's written into the new file
 * Return: 1 on success and  -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int num, count, fd, test;

	if (filename == NULL)
		return (-1);
	test = open(filename, O_RDONLY);
	if (test > -1)
	{
		if(truncate(filename, 0) != 0)
			return (-1);
		close(test);
		return (1);
	}
	fd = open(filename, O_CREAT|O_RDWR, 0600);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (count = 0; text_content[count]; count++)
		;
	num = write(fd, text_content, count);
	if (num < 0)
		return (-1);
	close(fd);
	return (1);
}

