#include <stdio.h>                                                                                                 
/**
 * main - prints lowercaseand uppercase letters in alphabetical order
 * Description: prints lowercase and uppercase in alphabetical order
 * Return: Always 0(success)
 */                                                                                                                
int main(void)                                                                                                     
{                                                                                                                  
	        int i = 97;
		
		int j = 65;

		while (i < 123)
		{
			putchar(i);
			i++;
		}
		while (j < 91)
		{
			putchar(j);
			j++;
		}
		putchar(10);
		return (0);
}
