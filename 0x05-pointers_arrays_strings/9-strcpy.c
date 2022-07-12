#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strcpy - copies string
 *@dest: pointer
 *@src: character pointer
 *Return: returns a value
 */
char *_strcpy(char *dest, char *src)

{
int l, c;
l = strlen(src);
for (c = 0; c <= l; c++)
{
*(dest + c) = *(src + c);
}
return (dest);
}
