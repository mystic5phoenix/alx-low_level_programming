#include <stdio.h>
#include "main.h"

/**
 *print_sign - prints the signs of input
 *@n: the checked integer
 *Return: 1, 0, -1 are the values
 */
int print_sign(int n)

{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}


