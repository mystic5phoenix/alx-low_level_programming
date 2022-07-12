#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_atoi - converts a string to an integer
 *@s: char pointer
 *Return: returns a value
 */
int _atoi(char *s)

{
int l, i, c;
double h = 0;
double d;
int p = 1;
l = strlen(s);
for (i = 0; i <= l; i++)
{
if (s[i] == '-')
p = p * -1;
if (s[i] >= '0' && s[i] <= '9')
{
h = h * 10;
c = s[i] - '0';
h = h + c;
if (s[i + 1] == ' ')
break;
}
}
d = p *h;
return (d);
}
