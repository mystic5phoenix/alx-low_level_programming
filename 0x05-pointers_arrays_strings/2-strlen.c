#include <stdio.h>
#include "main.h"

/**
 *_strlen - returns length of string
 *@s: pointer
 *Return: returns int
 */
int _strlen(char *s)

{
int l = 0;
while (*s != '\0')
{
l = l + 1;
s++;
}
return (l);
}
