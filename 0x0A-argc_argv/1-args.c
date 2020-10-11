#include <stdio.h>
/**
 * main - a program that prints number of arguments
 * @argc : int
 * @argv : string
 * Return: always 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
