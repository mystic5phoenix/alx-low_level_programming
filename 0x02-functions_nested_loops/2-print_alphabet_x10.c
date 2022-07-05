#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 - prints alphabet 10 times
 *nested while loop
 */
void print_alphabet_x10(void)

{
int i = 0;
char c;
while (i < 10)
{
for (c = 'a'; c <= 'z'; c++)
{
printf("%c", c);
}
printf("\n");
i++;
}
}
