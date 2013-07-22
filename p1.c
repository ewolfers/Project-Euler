#include <stdio.h>

int main() {
	unsigned int sum = 0;
	for(unsigned int i = 1; i < 1000; i++)
		if(!(i % 3) || !(i % 5)) sum += i;
	printf("%d", sum);
	return 0;
}