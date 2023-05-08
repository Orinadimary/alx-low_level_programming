#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: text to be read
 * @letters: letters to be read
 * Return: actual number of letters it could read and print
 * is NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
        ssize_t fd;
        ssize_t w;
        ssize_t t;

        fd = popen(filename, O_RDONLY);
        if (fd == -1)
                return (0);
        buf = malloc(sizeof(char) * letters);
        ft = fread(fd, buf, letters);
        w = fwrite(STDOUT_FILENO, buf, t);

        free(buf);
        pclose(fd);
        return (w);
}
