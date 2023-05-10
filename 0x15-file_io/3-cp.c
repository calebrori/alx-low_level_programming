#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
if (argc != 3) {
	printf("Usage: %s <file_from> <file_to>\n", argv[0]);
	return 1;
	}

	FILE *f1 = fopen(argv[1], "rb");
	if (f1 == NULL) {
	printf("Error: Cannot read from file %s\n", argv[1]);
	return 2;
	}

	FILE *f2 = fopen(argv[2], "wb");
	if (f2 == NULL) {
	printf("Error: Cannot write to file %s\n", argv[2]);
	fclose(f1);
	return 3;
	}

	char buffer[BUFFER_SIZE];
	size_t count;
	while ((count = fread(buffer, 1, BUFFER_SIZE, f1)) > 0) {
	if (fwrite(buffer, 1, count, f2) != count) {
		printf("Error: Cannot write to file %s\n", argv[2]);
		fclose(f1);
		fclose(f2);
		return 3;
	}
	}

	fclose(f1);
	fclose(f2);
	return 0;
}
