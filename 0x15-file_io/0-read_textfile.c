#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename : the file
 * @letters : the number of letters it should read and print
 * Return: a ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t str, str2;
char *buf;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);
if (fd == 0)
return (0);
str = read(fd, buf, letters);
if (str == -1)
{
free(buf);
return (0);
}
str2 = write(STDOUT_FILENO, buf, str);
if (str2 == -1)
{
free(buf);
return (0);
}
free(buf);
return (str2);
}
