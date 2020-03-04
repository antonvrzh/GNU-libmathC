#include <stdio.h>

long long unsigned int factorial(long long unsigned int n)
{
	if (0 == n || 1 == n)
		return 1;
	else
		return n * factorial(n - 1);
}