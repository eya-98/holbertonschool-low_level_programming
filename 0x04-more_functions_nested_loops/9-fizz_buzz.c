#include <stdio.h>
/**
 *main  - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int i, j, k, l;
for (i = 1 ; i <= 100 ; i++)
{
k = i % 3;
j = i % 5;
l = i % 15;
if (l == 0)
printf("FiizBuzz ");
else if (k == 0)
printf("Fizz ");
else if (i == 100)
printf("Buzz\n");
else if (j == 0)
printf("buzz ");
else
printf("%d ", i);
}
return (0);
}
