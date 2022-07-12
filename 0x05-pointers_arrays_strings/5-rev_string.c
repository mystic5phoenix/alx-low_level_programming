#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *rev_string - a function that reverses a string
 *@s: a char pointer
 *Return: void
 */
void rev_string(char *s)

{
int l, i;
char str;
l = strlen(s);
for (i = 0; i < l / 2; i++)
{
str = s[i];
s[i] = s [l - i - 1];
s[l - i - 1] = str;
}
}
