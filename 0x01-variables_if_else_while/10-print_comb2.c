#include<stdio.h>
/**
* main - main function
*
* Description: prints numbers from 00 to 99
*
* Return: 0
*
*/
int main(void)
{
int d;
int a;
for (d = '0'; d <= '9' ; d++)
{
for (a = '0'; a <= '9'; a++)
{
if (a != '0' && d != '0')
{
putchar (',');
putchar (' ');
}
putchar (d);
putchar (a);
}
}
putchar ('\n');
return (0);
}
