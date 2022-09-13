#include "main.h"
#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 * Description: prints the first 98 Fibonacci numbers
 * Return: Always 0(Success)
 */
int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}
int main(void)
{
	int i = 98;

	printf("%d", fib(i));
	getchar();
	return (0);
}
