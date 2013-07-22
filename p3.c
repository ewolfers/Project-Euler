#include <stdio.h>

int main() {
	unsigned int const num = 1000;
	unsigned int prime_numbers[10000];
	unsigned int prime_count = 0;
	prime_numbers[prime_count++] = 2;

	for(int i = 1; i <= num; i++) {
		for(int j = i - 1; j > 1; j--) {
			if(!(i % j)) break;
			else if(j == 2) prime_numbers[prime_count++] = i;
		}
	}

	for(int i = 0; i < prime_count; i++) {
		printf("%d ", prime_numbers[i]);
	}
	return 0;
}