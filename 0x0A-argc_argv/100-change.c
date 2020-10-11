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
int s = 0, cents;
if (argc != 2)
{
printf("Error\n");
return (1);
}
else if (atoi(argv[1]) > 0)
{
cents = atoi(argv[1]);
if (cents >= 25)
{
s = cents / 25;
cents = cents % 25;
}
if (cents >= 10)
{
s = s + (cents / 10);
cents = cents % 10;
}
if (cents >= 5)
{
s = s + (cents / 5);
cents = cents % 5;
}
if (cents >= 2)
{
s = s + (cents / 2);
cents = cents % 2;
}
if (cents >= 1)
s = s + 1;
printf("%d\n", s);
return (0);
}
else if (atoi(argv[1]) <= 0)
printf("0\n");
return (1);
}
