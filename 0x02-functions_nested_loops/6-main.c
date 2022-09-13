#include "main.h"
#include <stdio.h>
/**
 * Main - Entry for code
 * Description: computes the absolute value of an integer
 * Return: Alwways 0(success)
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
