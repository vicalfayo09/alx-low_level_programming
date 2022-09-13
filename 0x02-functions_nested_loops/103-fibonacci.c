#include "main.h"
#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms below 4,000,000
 * Description: finds and prints the sum of the even-valued terms below 4,000,000
 * Return : Always 0(Success)
 */
int main(void)
{
	long int total_sum, sum, first, second;

	total_sum = 0;
	sum = 0;
	first = 0;
	second = 1;
	while (sum < 4000000)
	{
		sum = first + second;
		if (sum % 2 == 0)
		{
			total_sum += sum;
		}
		first = second;
		second = sum;
	}
	print_f("%li\n", total_sum);
	return (0);
}
