#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Description: Copies a string pointed to by @src, including the
 * terminating null byte, to a buffer pointed to by @dest
 * Return: Always 0(success)
 */
int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
}
