#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Description: Returns the length of a string
 * Return: Always 0(success)
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
