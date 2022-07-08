#include <stdio.h>
#include "main.h"

/**
 *more_numbers - prints 10 times
 *Return: void
 */
void more_numbers(void)

{
int i;
int n;
for (n = 0; n < 10; n++)
{
for (i = 0; i <= 14; n++)
{
if (i > 9)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
}
_putchar('\n');
}
}
