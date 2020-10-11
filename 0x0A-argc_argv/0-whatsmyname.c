#include <stdio.h>
/**
 * main - a program that prints its name
 * @argc : int
 * @argv : string
 * Return: always 0
 */
int main(int argc, char *argv[])
{
if (argc != 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
