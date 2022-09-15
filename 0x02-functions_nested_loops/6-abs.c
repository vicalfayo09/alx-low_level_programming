#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n : n is an integer
 * Description: computes absolute value of an integer
 * Return: integer
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
