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
int s, cents = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
else if (atoi(argv[1]) > 0)
{
s = atoi(argv[1]);
if (s >= 25)
{
cents = s / 25;
s = s - (cents * 25);
}
if (s >= 10)
{
cents = cents + (s / 10);
s = s - cents * 10;
}
if (s >= 5)
{
cents = cents + (s / 5);
s = s - cents * 5;
}
if (s > 2)
{
cents = cents + (s / 2);
s = s % 2;
}
if (s > 0)
cents = cents + 1;
printf("%d\n", cents);
 }
else if (atoi(argv[1]) <= 0)
{
printf("0\n");
}
return (0);
}
