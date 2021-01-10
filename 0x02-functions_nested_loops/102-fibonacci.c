#include"stdio.h"
/**
 *
 *
 */
int main(void)
{
int i, j, n;
i = 1;
j = 2;
n = 2;
while (n != 50)
{
printf("%d, ", i);
printf("%d", j);
i = i + j;
j = i + j;
n++;
}
return (0);
}
