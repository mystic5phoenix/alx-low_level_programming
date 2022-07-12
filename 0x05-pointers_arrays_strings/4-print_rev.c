#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *print_rev - function to print rev
 *@s: character pointer
 *Return: void
 */
void print_rev(char *s)

{
int l, a;
l = strlen(s);
a = l - 1;
while (a >= 0)
{
_putchar(*(s + a));
s--;
}
_putchar('\n');
}
