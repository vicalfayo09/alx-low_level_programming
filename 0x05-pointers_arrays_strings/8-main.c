#include "main.h"
/**
 * main - check the code
 * Description: Prints an inputted number of elements
 * of an array of integers
 * Return: Always 0(success)
 */
int main(void)
{
	int array[5];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	print_array(array, 5);
	return (0);
}
