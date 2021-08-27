#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * reverse alphabet 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lower_case;
for (lower_case = 'z'; lower_case >= 'a'; lower_case--)
putchar(lower_case);
putchar('\n');
return (0);
}
