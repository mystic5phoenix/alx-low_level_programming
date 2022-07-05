#include <stdio.h>
#include "main.h"

/**
 *times_table - a function that prints a table
 *void:
 */
void times_table(void)
{
int i, n, f;
for (i = 0; i <= 9; i++)
{
for (n = 0; n <= 9; n++)
{
f = i * n;
printf("%d", f);
printf(",");
printf(" ");
}
printf("\n");
}
}
