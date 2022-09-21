#include "main.h"
#include <stdio.h>
/**
 * main - check the code for
 * Description: Encodes a string to 1337
 * Return: Always 0(success)
 */
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *p;
	
	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
