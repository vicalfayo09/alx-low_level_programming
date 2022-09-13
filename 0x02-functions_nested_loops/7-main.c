#include "main.h"
/**
 * Main - checks the code
 * Description : prints the last digit of a number.
 * Return: Always 0(success)
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
