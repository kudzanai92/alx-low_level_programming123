#include "main.h"

/**
 * print_most_numbers - Print the numbers since 0 up to 9
 * Description: Prints the numbers exluding 2 and 4
 * Return: void
 */

void print_most_numbers(void)

{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	if (!(c == '2' || x == '4'))
		_putchar(c)
	}
	_putchar('\n');
}
