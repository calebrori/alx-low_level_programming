#include "main.h"
#include <stdlib.h>

/*
 * read_textfile - function that reads a text file and prints it to
 *                 the POSIX standard output
 * @filename: name of the file to be read
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor, length, check;
	char *buffer;

	/* check if filename is null */
	if (filename == NULL)
		return (0);

	/* create buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* open file */
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}

	/* read file and error check */
	length = read(file_descriptor, buffer, letters);
	if (length == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	/* print file to POSIX standard output */
	check = write(STDOUT_FILENO, buffer, length);
	if (check == -1 || length != check)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	/* close file, free buffer, and return length */
	close(file_descriptor);
	free(buffer);

	return (length);
}
