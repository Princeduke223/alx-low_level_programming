#include "main.h"
/**
 * create_file -will create a file.
 * @filename: the name of the file to create
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;/*file descriptor*/
	int bytes_written;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{/*write into the file*/
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)/*writing to the file fails*/
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
