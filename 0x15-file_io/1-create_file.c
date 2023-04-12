#include "main.h"

/**
 * create_file - create a file with permissions
 * rw------- and write in it
 * @filename: file name
 * @text_content: text to write in
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
ssize_t file;
ssize_t w;
int str_len = 0;
if (filename == NULL)
{
return (-1);
}
file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (file == -1)
{
return (-1);
}
if (text_content[0] == '\0')
{
close(file);
return (1);
}
if (text_content != NULL)
{
for (str_len = 0; text_content[str_len];)
{
str_len++;
}
}
w = write(file, text_content, str_len);
if (w == -1)
{
close(file);
return (-1);
}
close(file);
return (1);
}
