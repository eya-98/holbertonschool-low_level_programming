#include <stdio.h>
/**
 *
 *
 */
int main()
{
int i, j, sum;
i = 1;
j = 1;
sum = 0;
while (i < 1024)
{
i = i * 3;
sum = sum + i;
}
while (j < 1024)
{
j = j * 3;
sum = sum + j;
}
return (sum);
}
