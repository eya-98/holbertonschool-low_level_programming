#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename : a file
 * @text_content : a NULL terminated string to append to the file
 * Return: an int
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, i, str;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
for (i = 0; text_content[i]; i++)
{
}
}
str = write(fd, text_content, i);
if (str == -1)
return (-1);
close(fd);
return (1);
}

