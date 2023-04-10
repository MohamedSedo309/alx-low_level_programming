#include "main.h"

/**
 * read_textfile - read a txt file and
 * print its content
 * @filename: text file to read
 * @letters: size of letters
 * Return: 0 if failed,
 * size read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
ssize_t r;
ssize_t w;
char *buffer;
if (filename == NULL)
{
return (0);
}
file = open(filename, O_RDONLY);
if (file == -1)
{
return (0);
}
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
return (0);
}
r = read(file, buffer, letters);
if (r == -1)
{
free(buffer);
close(file);
return (0);
}
w = write(file, buffer, letters);
if (w == -1)
{
free(buffer);
close(file);
return (0);
}
close(file);
return (r);
}
