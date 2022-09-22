#include "main.h"
#include <stdio.h>
/**
 * main - checks the code
 * Description: Prints a buffer 10 bytes at a time, starting with
 * the byte position, then showing the hex content,
 * then displaying printable charcaters
 * Return: Always 0(success)
 */
int main(void)
{
	char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";

	printf("%s\n", buffer);
	printf("---------------------------------\n");
	print_buffer(buffer, sizeof(buffer));
	return (0);
}
