#include <stdio.h>
#include <stdbool.h>

typedef unsigned int u32;

int main() {
	u32 prime_count = 1;
	u32 num = 2;

	while(prime_count != 10001) {
		for(u32 i = num - 1; i > 1; i--) {
			if(num % i == 0) break;
			else if(i == 2) { 
				prime_count++;
				printf("%d ", num); 
			}
		}
		num++;
	}

	return 0;	
}