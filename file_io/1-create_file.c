#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 *create_file - aczxvzv
 *@filename: ascszc
 *@text_content: advzv
 *Return: asvv`
 */

int create_file(const char *filename, char *text_content)
{
	int fd, written;
	int size = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		size = strlen(text_content);
		written = write(fd, text_content, size);
	}
	if (written == -1)
		return (-1);

	close(fd);
	return (1);
}