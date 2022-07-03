#include <stdio.h>

/**
 *main -Entry point
 *prints the alphabet in lowercase, followed by a new line
 *Return: Always 0 (Success)
 */
int main(void)

{
int x;
for (x = 'a'; x <= 'z'; x++)
{
if (x != 'e' && x != 'q')
putchar(x);
}
putchar('\n');
return (0);
}
