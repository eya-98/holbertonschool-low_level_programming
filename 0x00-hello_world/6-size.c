#include<stdio.h>
/**
* main - Prints size
* Description: prints size
* Return: 0
*/
int main(void)
{
printf("Size of char: %i byte\n", sizeof(char));
printf("Size of int: %i bytes\n", sizeof(int));
printf("Size of float: %i bytes\n", sizeof(float));
printf("Size of double: %i bytes\n", sizeof(double));
printf("Size of longint: %i bytes\n", sizeof(long int));
printf("Size of longlongint: %i bytes\n", sizeof(long long int));
return (0);
}
