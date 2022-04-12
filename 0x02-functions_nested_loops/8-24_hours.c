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
printf("0%d:0%d",i , j);
printf("\n");
}
else
{
printf("0%d:%d",i , j);
printf("\n");
}

}
else
{
if (j < 10)
{
printf("%d:0%d", i, j);
printf("\n");
}
else
{
printf("%d:%d",i , j);
printf("\n");
}
}
}
}
}
