#include <stdio.h>
/**
 * main - prints the letters of the alphabet
 * Description: prints the letters of alphabet in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);
}
