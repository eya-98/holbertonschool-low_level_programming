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
int s, i = 0;
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
s = atoi(argv[1]);
if (s >= 25)
{
i = s / 25;
s = s - (i * 25);
}
if (s >= 10)
{
i = i + (s / 10);
s = s - i * 10;
}
if (s >= 5)
{
i = i + (s / 5);
s = s - i * 5;
}
if (s > 2)
{
i = i + (s / 2);
s = s % 2;
}
if (s > 0)
i = i + 1;
printf("%d\n", i);
return (i);
}
}
return (0);
}
