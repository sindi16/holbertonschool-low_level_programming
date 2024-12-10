#include "main.h"
#include <string.h>
/**
 * append_text_to_file - sdfsdf
 * @filename:sdfsdf
 * @text_content:sdfsdf
 * Return:dfsdf
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int size;
	int writen;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		size = strlen(text_content);
		writen = write(fd, text_content, size);
	}

	if (writen == -1)
		return (-1);

	close(fd);
	return (1);
}
