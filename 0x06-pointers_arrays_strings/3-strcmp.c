#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strcmp - compares a istring
 *@s1: pointer
 *@s2: pointer
 *Return: returns a value
 */
int _strcmp(char *s1, char *s2)

{
int l, i, n, c, d;
l = strlen(s1);
for (i = 0; i < l; i++)
{
if (*(s1 + i) != *(s2 + i))
break;
}
c = s1[i];
d = s2[i];
n = c - d;
return (n);
}
