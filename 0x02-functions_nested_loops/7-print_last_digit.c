#include "main.h"

/**
 * Main - Print the last value of an integer.
 * 
 *
 * Return: 0.
 */
int print_last_digit(int n)
{
int lastDigit=0;
lastDigit = n % 10;
_putchar(lastDigit);
return (0);
}
