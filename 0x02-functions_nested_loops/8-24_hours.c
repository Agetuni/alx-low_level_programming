#include "main.h"

/**
 * Main - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 * 
 *
 * Return: Void.
 */
void jack_bauer(void)
{
int i,j;
for (i = 0; i <= 23; i++)
{
for (j = 0; j < 60; j++)
{
if (i < 10)
{
if (j < 10)
{
_putchar('0' + i + ':' + '0' + j);
_putchar('\n');
}
else
{
_putchar('0' + i + ':' + '0' + j);
_putchar('\n');
}
}
else
{
if (j < 10)
{
_putchar( i + ':' + '0' + j);
_putchar('\n');
}
else
{
_putchar(i + ':' + j);
_putchar('\n');
}
}
}
}
