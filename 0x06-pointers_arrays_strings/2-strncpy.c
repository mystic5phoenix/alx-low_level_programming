#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strncpy - copies a string
 *@dest: destination pointer
 *@src: source pointer
 *@n: number of elements
 *Return: returns a value
 */

char *_strncpy(char *dest, char *src, int n)

{
int i, e;
e = strlen(src);
for (i = 0; i < n; i++)
{
if (e > n)
{
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
}
else
{
for (i = 0; i <= e; i++)
{
*(dest + i) = *(src + i);
}
for (i = e + 1; i < n; i++)
{
*(dest + i) = '\0';
}
}
}
return (dest);
}
