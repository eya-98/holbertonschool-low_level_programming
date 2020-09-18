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
putchar (d);
putchar (a);
if (d != '9' || a != '9')
{
putchar (',');
putchar (' ');
}
}
}
putchar ('\n');
return (0);
}
