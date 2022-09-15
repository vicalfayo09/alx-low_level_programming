#include "main.h"
/**
 * print_line - draws a straight line in terminal
 * @n: n is an integer
 * Description: draws a straight line in terminal
 * Return: void
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
