#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc : int
 * @argv : string
 * Return: 0 or change
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
if (atoi(argv[1]) <= 0)
printf("0\n");
else
{
if (atoi(argv[1]) % 25 == 0)
{
printf("%d\n", atoi(argv[1]) / 25);
return (atoi(argv[1]) / 25);
}
else if (atoi(argv[1]) % 10 == 0)
{
printf("%d\n", atoi(argv[1]) / 10);
return (atoi(argv[1]) / 10);
}
else if (atoi(argv[1]) % 5 == 0)
{
printf("%d\n", atoi(argv[1]) / 5);
return (atoi(argv[1]) / 5);
}
else if (atoi(argv[1]) % 2 == 0)
{
printf("%d\n", atoi(argv[1]) / 2);
return (atoi(argv[1]) / 2);
}
else if (atoi(argv[1]) % 1 == 0)
{
printf("%d\n", atoi(argv[1]) / 1);
return (atoi(argv[1]) / 1);
}
}
}
return (0);
}
