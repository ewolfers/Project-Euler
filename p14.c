#include <stdio.h>

typedef unsigned int u32;

u32 collatz(u32 num) {
	u32 count = 0;
	while(num != 1) {
		if(num % 2 == 0) num /= 2;
		else num = 3 * num + 1;
		count++;
	}
	return count;
}

int main() {
	u32 start_num;
	u32 chain_count = 0;

	for(u32 i = 1; i < 1000000; i++) {
		u32 temp_count = collatz(i);

		if(chain_count < temp_count) {
			start_num = i;
			chain_count = temp_count;
		}
		printf("%d\n", i);
	}

	printf("%d", start_num);

	return 0;
}