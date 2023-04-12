#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - allocate 1024 bytes for a buffer
 * to make good performance
 * @file: file name
 * Return: A pointer to a buffer.
 */
char *create_buffer(char *file)
{
char *b;
b  = malloc(sizeof(char) * 1024);
if (b == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
return (b);
}

/**
 * close_fd - Close any file
 * @file: file to be closed.
 */
void close_fd(int file)
{
int c;
c = close(file);
if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
exit(100);
}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: number of arguments.
 * @argv: pointer to the arguments.
 * Return: 0 on success, exit with code on fail.
 */
int main(int argc, char *argv[])
{
int from;
int to;
int r;
int w;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
r = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do
{
if (from == -1 || r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
w = write(to, buffer, r);
if (to == -1 || w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
r = read(from, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
}
while (r > 0);
free(buffer);
close_fd(from);
close_fd(to);
return (0);
}
