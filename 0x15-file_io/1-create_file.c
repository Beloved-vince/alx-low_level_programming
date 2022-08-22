#include "main.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file - function to create file in c
 * @filename: filename to be created
 * @text_content: file content
 * Return: Nothing
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = " ";

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	len = write(fd, text_content, strlen(text_content));

	if ((fd == -1) | (len == -1))
		return (-1);

	close(fd);

	return (1);
}
