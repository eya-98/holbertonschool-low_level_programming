#include<stdio.h>
/**
* main - Prints size
* Description: prints size
* Return: 0
*/
int main(void)
{
printf("Size of a char: %i byte\n", sizeof(char));
printf("Size of an int: %i bytes\n", sizeof(int));
printf("Size of a longint: %i bytes\n", sizeof(long int));
printf("Size of a longlongint: %i bytes\n", sizeof(long long int));
printf("Size of a float: %i bytes\n", sizeof(float));
return (0);
}
