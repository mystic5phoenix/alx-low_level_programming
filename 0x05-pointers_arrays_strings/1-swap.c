#include <stdio.h>
#include "main.h"

/**
 *swap_int - swaps integers
 *@a: integer
 *@b: integer
 *Return - void
 */
void swap_int(int *a, int *b)

{
int c;
c = *a;
*a = *b;
*b = c;
}
