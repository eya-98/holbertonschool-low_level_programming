#include <stdio.h>
/**
 * main - main function
 * description: random and last digit
 * Return: Always 0
 */
int main(void)
{
char letter;
for (letter = 'a'; letter < 'e'; letter++)
putchar(letter);
for (letter = 'f'; letter < 'q'; letter++)
putchar(letter);
for (letter = 'r'; letter < 'z'; letter++)
putchar(letter);
putchar ('\n');
return (0);
}
