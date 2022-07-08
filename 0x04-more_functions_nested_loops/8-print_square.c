#include <stdio.h>
#include "main.h"

/**
 *print_square - prints squares
 *@size:number of sides
 *Return: void
 */
void print_square(int size)

{
int i;
int j = 1;
while (j <= size)
{
for (i = 0; i < size; i++)
{
_putchar(35);
}
_putchar('\n');
j++;
}
if (size <= 0)
{
_putchar('\n');
}
}
