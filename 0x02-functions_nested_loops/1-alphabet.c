#include <stdio.h>
#include "main.h"

/**
 *Print_alphabet - Entry point
 *Prints the alphabet
 */
void print_alphabet(void)

{
char c;
for (c = 'a'; c <= 'z'; c++)
{
printf("%c", c);
}
printf("\n");
}
