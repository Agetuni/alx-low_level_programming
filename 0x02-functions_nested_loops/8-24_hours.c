#include "main.h"

/**
 * Main - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 * 
 *
 * Return: Void.
 */
void jack_bauer(void)
{
for (int i = 0; i <= 23; i++)
{

for (int j = 0; j < 60; j++)
{
if (i < 10)
{
if (j < 10)
{
_putchar('0' + i + ':0' + j);
printf("\n");
}
else
{
_putchar('0' + i + ':' + j);
printf("0%d:%d",i , j);
printf("\n");
}
}
else
{
if (j < 10)
{
_putchar( i + ':0' + j);
printf("\n");
}
else
{
_putchar(i + ':' + j);
printf("\n");
}
}
}
}
