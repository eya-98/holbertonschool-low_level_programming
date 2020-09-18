#include<stdio.h>
/**
*main - function main
*
*Description: prints all possible combinations of one digit numbers
*
*Return: 0
*
*/
int main(void)
{
int m;
for (m = '0'; m <= '9' ; m++)
{
if (m != '0')
{
putchar(',');
putchar(' ');
}
putchar(m);
}
putchar('\n');
return (0);
}
