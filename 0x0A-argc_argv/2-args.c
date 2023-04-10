#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of values passed
 * @argv: array of values passed
 *
 * Return: all arguments it receives
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
