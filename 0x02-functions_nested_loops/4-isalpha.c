#include "main.h"
/**
 * _isalpha - Checks for alphabetic letter
 * @c : c is an ASCII character
 * Return: 1 (if letter)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return 0;
	}
}
