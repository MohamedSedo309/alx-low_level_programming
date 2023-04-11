#include"main.h"

/**
 *append_text_to_file - type text at the end of a file
 *@filename: the file name
 *@text_content: text to add at the end of the file.
 *Return: 1 on Succed , -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t file;
ssize_t w;
ssize_t str_len = 0;
if (filename == NULL)
{
return (-1);
}
while (text_content[str_len] != '\0')
{
str_len++;
}
file = open(filename, O_WRONLY | O_APPEND);
w = write(filename, text_content, str_len);
if (file == -1 || w == -1)
{
return (-1);
}
close(file);
return (1);
}
