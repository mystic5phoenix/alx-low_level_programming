#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *leet - AEOTL
 *@c: pointer
 *Return: returns a value
 */
char *leet(char *c)

{
int k, i;
char s[] = "aeotl";
char C[] = "AEOTL";
char l[] = "43071";
for (i = 0; c[i] != '\0'; i++)
{
for (k = 0; k < 5; k++)
{
if (c[i] == s[k] || c[i] == C[k])
{
c[i] = l[k];
break;
}
}
}
return (c);
}
