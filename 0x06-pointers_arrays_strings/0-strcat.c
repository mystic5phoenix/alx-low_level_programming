#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strcat - concatenates strings
 *@dest: destination pointer
 *@src: source pointer
 *Return: returns a value
 */
char *_strcat(char *dest, char *src)

{
int i, l, d;
l = strlen(src);
d = strlen(dest);
for (i = 0; i < l; i++)
{
*(dest + d + i) = *(src + i);
}
return (dest);
}
