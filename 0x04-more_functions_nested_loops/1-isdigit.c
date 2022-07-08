#include <stdio.h>
#include "main.h"

/**
 *_isdigit - checks for a digit
 *@c: our input
 *Return: returns 1 or 0
 */
int _isdigit(int c)

{
int result;
if (c >= 48 && c <= 57)
{
result = 1;
}
else
{
result = 0;
}
return (result);
}
