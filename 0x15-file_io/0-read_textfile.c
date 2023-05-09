#include "main.h"
#include <stdlib.h>

/*
 *read_textfile - function that reads a text file and prints it
 *@filename: name of the file to be read
 *@letters: number of letters
 *Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor, length, check;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}

	length = read(file_descriptor, buffer, letters);
	if (length == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	check = write(STDOUT_FILENO, buffer, length);
	if (check == -1 || length != check)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	close(file_descriptor);
	free(buffer);

	return (length);
}
