#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print all base 16 numbers using only putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit = 0;
char ch;
while (digit <= 9)
{
putchar(digit + '0');
digit++;
}
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
