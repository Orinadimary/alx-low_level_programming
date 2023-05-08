#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer
 * @text_content: string
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int y, x, z = 0;

	if (filename == NULL)

		return (-1);
	if (text_content != NULL)
	{
		for (z = 0; text_content[z];)
			z++;
	}
	y = open(filename, O_WRONLY | O_APPEND);
	x = write(y, text_content, z);

	if (y == -1 || x == -1)
		return (-1);
	close(y);
	return (1);
}
