#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print numbers from 012 to 789
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int k, m, n;
for (k = 0; k <= 9; k++)
{
for (m = k + 1; m <= 9; m++)
for (n = m + 1; n <= 9; n++)
{
putchar(k + '0');
putchar(m + '0');
putchar(n + '0');
putchar(',');
			putchar(' ');
} 
if (k < 7)
{
putchar(',');
putchar(' ');
}
}
return (0);
}
