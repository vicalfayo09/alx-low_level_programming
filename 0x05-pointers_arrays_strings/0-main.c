#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Description: takes pointer to int as parameter
 * and updates the value it points to 98
 * Return: Always 0(success)
 */
int main(void)
{
	int n;

	n = 402;
	printf("n = %d\n", n);
	reset_to_98(&n);
	printf("n = %d\n", n);
	return (0);
}
