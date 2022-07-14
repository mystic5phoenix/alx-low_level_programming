#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strncat - a function that concatenates
 *@dest: destination pointer
 *@src: source pointer
 *@n: no of  bytes
 *Return: returns a pointer
 */

char *_strncat(char *dest, char *src, int n)

{
int l, i, h, b;
l = strlen(dest);
h = strlen(src);
b = l + h;
for (i = 0; i < n; i++)
{
if (i > b)
break;
*(dest + l + i) = *(src + i);
}
return (dest);
}
