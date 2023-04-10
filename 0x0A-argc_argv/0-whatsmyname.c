#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of values passed
 * @argv: array of values passed
 *
 * Return: name, followed by a new line
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
