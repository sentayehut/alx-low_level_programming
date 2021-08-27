#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print numbers from 00 to 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int t;
int n;

for (t = 0; t <= 9; t++)
{
for (n = t + 1; n <= 9; n++)
{
putchar(t + '0');
putchar(n + '0');

if (t < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
