#include "main.h"
/**
 * read_textfile -will  read a text file and output it to standard output
 * @filename: pointer to the name of the file that is been read
 * @letters:  the maximum number of characters to that are read
 * Return: Number of letters  read, -1 any error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fad;/*represents the file descriptor*/
	int bytes_read;/*no of bytes read*/
	int bytes_written;/*no of bytes written*/
	char *buffer;

	if (filename == NULL)
		return (0);
	/*allocation of memory on the buffer*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fad = open(filename, O_RDONLY);
	if (fad == -1)/*opening the file fails*/
	{
		free(buffer);
		return (0);
	}
	bytes_read = read(fad, buffer, letters);
	if (bytes_read == -1)/*reading file fails*/
	{
		free(buffer);
		close(fad);/*file descriptor is closed*/
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{
		free(buffer);
		close(fad);
		return (0);
	}
	free(buffer);
	close(fad);
	return (bytes_read);
}
