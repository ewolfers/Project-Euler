// Problem 10 - Summation of Primes
/* The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million. */

#include <stdio.h>
#include <stdbool.h>

typedef unsigned int u32;

bool is_prime(u32 num) {
	if(num < 2) return false;
	else if(num == 2) return true;
	else {
		for(u32 i = num - 1; i > 1; i--)
			if(num % i == 0) return false;
	}
	return true;
}

int main() {
	u32 bigSum = 0;

	for(u32 i = 1; i < 2000000; i++) {
		if(is_prime(i)) {bigSum += i;
		printf("%d\n", i); }
	}

	printf("%d", bigSum);

	return 0;
}