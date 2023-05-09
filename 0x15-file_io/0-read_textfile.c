#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: number of letters it should read and print
 * @letters: letters to be read and written
 * Return: actual number of letters it could read and print
 * if filename is NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *n;
	ssize_t i;
	ssize_t x;
	ssize_t y;

	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	n = malloc(sizeof(char) * letters);
	y = read(i, n, letters);
	x = write(STDOUT_FILENO, n, y);

	free(n);
	close(i);
	return (x);
}
