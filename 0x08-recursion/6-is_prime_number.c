#include "main.h"

/**
 * is_prime_number - checks if the input integer is a prime number
 * @n - input integer
 */

int is_prime_number(int n)
{
	int i;
	if (n < 2)
		return 0;
	for (i = 2; n / i >= i; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

