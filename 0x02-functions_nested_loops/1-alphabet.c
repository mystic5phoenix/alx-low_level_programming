#include <stdio.h>
#include "main.h"

/**
 *main - Entry point
 *Print_alphabet is a user defined function
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
