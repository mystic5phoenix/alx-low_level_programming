#include <stdio.h>

/**
 *main - Entry point
 *prints sum of multiples of 3 and 5
 *Return: 0 (Success)
 */
int main(void)
{
int i;
int n = 0, m = 0;
for (i = 3; i <= 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
n += i;
}
if (i % 15)
{
m += i;
}
}
printf("%d\n", n);
return (0);
}
