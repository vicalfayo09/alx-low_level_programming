#include <stdio.h>
/**
 * main - prints lowercase letters in alphabetical order
 * Description: prints lowercase letters in alphabetical order
 * Return: Always 0(success)
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
