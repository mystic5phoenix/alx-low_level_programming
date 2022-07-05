#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - prints up until 98
 *@n: our input
 */
void print_to_98(int n)

{
int i;
if (n == 98)
{
printf("98");
}
else
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i == 98)
continue;
printf(",");
printf(" ");
}
for (i = n; i >= 98; --i)
{
printf("%d", i);
if (i == 98)
continue;
printf(",");
printf(" ");
}
}
printf("\n");
}
