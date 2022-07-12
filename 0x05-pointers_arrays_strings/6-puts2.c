#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *puts2 - prints every other character of str
 *@str: char pointer
 *Return: void
 */
void puts2(char *str)

{
int a, l;
l = strlen(str);
for (a = 0; a < l; a += 2)
{
_putchar(*(str + a));
}
_putchar('\n');
}
