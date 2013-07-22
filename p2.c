#include <stdio.h>

unsigned int fib(unsigned int num) {
	if(num == 1) return 1;
	else if(num == 2) return 2;
	else return fib(num - 1) + fib(num - 2);
}

int main() {
	unsigned int even_sum = 0;
	for(int i = 1; fib(i) < 4000000; i++)
		if(!(fib(i) % 2)) even_sum += fib(i);
	printf("%d", even_sum);
	return 0;
}