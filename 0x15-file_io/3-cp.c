#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - takes 1024 bytes in  a buffer
 * @file: file that stores the buffer
 * Return: pointer to the buffer
 */
char *create_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to NAME_OF_THE_FILE");
exit(99);
}
return (buffer);
}
/**
 * close_file - Closes the file
 * @fd: file descriptor tobe closed
 */
void close_file(int fd)
{
int d;

d = close(fd);
if (d == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * main - Copies the files content to another file
 * @argc: arguments to be passed
 * @argv: array pointing to the arguments
 * Return: 0 (success)
 * Description: If the arguments count is not correct exit with code 97.
 * If file_from does not exist or cannot be read exit code 98.
 * If file_to cannot be created or written to exit code 99.
 * If file_to or file_from cannot be closed exit code 100
 */
int main(int argc, char *argv[])
{
int from, x, y, z;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
y = read(from, buffer, 1024);
x = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
{
if (from == -1 || y == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
z = write(x, buffer, y);
if (x == -1 || z == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
y = read(from, buffer, 1024);
x = open(argv[2], O_WRONLY | O_APPEND);
}
while
(y > 0);
free(buffer);
close_file(from);
close_file(x);
return (0);
}
