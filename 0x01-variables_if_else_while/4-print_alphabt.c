#include <stdio.h>
/**
 * main - main function
 * description: random and last digit
 * Return: Always 0
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
if (letter != 'e' && letter != 'q')
putchar(letter);
putchar ('\n');
return (0);
}
