#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed into it
 * @argc: number of values passed
 * @argv: array of values passed
 *
 * Return: number of arguments passed into the program
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
