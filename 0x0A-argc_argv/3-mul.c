#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc : int
 * @argv : string
 * Return: an int or 1;
 */
int main(int argc, char *argv[])
{
int i;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
i = (atoi(argv[1]) * atoi(argv[2]));
printf("%d\n", i);
}
return (0);
}
