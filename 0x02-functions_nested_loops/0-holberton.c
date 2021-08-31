#include "main.h"
/**
 * main - puch 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "Holberton";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}

