#include "main.h"
/**
 * main - prints lowercase letters
 * Description: prints alphabets
 * Return: Always 0(Success).
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
