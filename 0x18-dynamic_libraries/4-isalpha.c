#include "holberton.h"
/**
* _isalpha - main function
*
*@c: checks if a charachter is a letter
*
*Return: depends if the charachter is a letter
*
*/
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') ||  (c >= 'a' && c <= 'z'))
{
return (1);
}
else
return (0);
}
