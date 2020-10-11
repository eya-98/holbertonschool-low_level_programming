#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints its name
 * @argc : int
 * @argv : string
 * Return: always 0 or 1
 */
int main(int argc, char *argv[])
{
int i, j, k = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] ; j++)
{
if (argv[i][j] < '0' && argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
}
k = k + atoi(argv[i]);
}
printf("%d\n", k);
return (0);
}
