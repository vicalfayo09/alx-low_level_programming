#include <stdio.h>

/**
 * main - prints single digit numbers
 * Description: prints single digit numbers
 * Return: Always 0(success)
 */
int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
       	
}
