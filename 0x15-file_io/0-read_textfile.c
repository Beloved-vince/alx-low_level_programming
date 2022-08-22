#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 * read_textfile - A prototype for Read a file
 * @filename: name of file to read to stdout
 * @letters: number of letters in the file
 * Return: file and number of letters in it
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count, str;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		return (0);
		exit(1);
	}
	count = read(fd, buf, letters);
	buf[count] = '\0';

	close(fd);

	str = write(STDOUT_FILENO, buf, letters);


	return (str);
}
