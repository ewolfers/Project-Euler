#include <stdio.h>
#include <stdbool.h>

int main() {
	unsigned int num = 1;
	bool found_ans = false;

	while(true) {
		for(int i = 1; i < 21; i++) {
			if(num % i != 0) break;
			else if(i == 20) found_ans = true;
		}

		if(found_ans) { 
			printf("%d", num);
			break;
		} else num++;
	}

	return 0;
}