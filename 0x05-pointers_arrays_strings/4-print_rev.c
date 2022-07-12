#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *
 *
 */
void print_rev(char *s)

{
int l;
l = strlen(s);
l = l - 1;
while (l >= 0)
{
_putchar(*(s + l));
s--;
}
_putchar('\n');
}
