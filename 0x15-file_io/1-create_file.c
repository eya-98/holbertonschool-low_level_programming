#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * create_file - a function that creates a file.
 * @filename : a file
 * @text_content : a NULL terminated string to write to the file
 * Return: an int
 */
int create_file(const char *filename, char *text_content)
{
int str;
int fd, i;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
if (fd == -1)
return (-1);
i = 0;
if (text_content[i] == '\0')
{
return (1);
}
for (i = 0; text_content[i] != '\0'; i++)
{
}
str = write(fd, text_content, i);
if (str == -1)
return (-1);
close(fd);
return (1);
}
