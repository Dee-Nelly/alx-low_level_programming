#include <stdio.h>
#include <math.h>

/**
  * main - prints the largest prime factor of the number 612852475143
  *
  * Return: Always 0
  */

int main(void)
{
	long i, max_factor;
	long given_num = 612852475143;
	double square = sqrt(given_num);

	for (i = 1; i <= square; i++)
	{
		if (given_num % i == 0)
		{
			max_factor = given_num / i;
		}
	}
	printf("%ld\n", max_factor);
	return (0);
}
