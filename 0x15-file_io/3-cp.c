#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * main - copies the content of one file to another file
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Usage: %s <file_from> <file_to>\n", argv[0]);
		return (1);
	}

	FILE *from_file = fopen(argv[1], "rb");

	if (from_file == NULL)
	{
		printf("Error: Cannot read from file %s\n", argv[1]);
		return (2);
	}

	FILE *to_file = fopen(argv[2], "wb");

	if (to_file == NULL)
	{
		printf("Error: Cannot write to file %s\n", argv[2]);
		fclose(from_file);
		return (3);
	}

	char buffer[BUFFER_SIZE];
	size_t count;

	while ((count = fread(buffer, 1, BUFFER_SIZE, from_file)) > 0)
	{
		if (fwrite(buffer, 1, count, to_file) != count)
		{
			printf("Error: Cannot write to file %s\n", argv[2]);
			fclose(from_file);
			fclose(to_file);
			return (3);
		}
	}

	fclose(from_file);
	fclose(to_file);
	return (0);
}

