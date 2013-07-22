#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(unsigned int num) {
	char strnum[10];
	sprintf(strnum, "%d", num);
	unsigned int num_count = 0;

	for(int i = 0; strnum[i] != '\0'; i++)
		num_count++;
	
	unsigned int i = 0;
	unsigned int j = num_count-1;
	while(i != j && i < j)
		if(strnum[i++] != strnum[j--]) return false;

	return true;
}

void quick_sort(unsigned int *arr, unsigned int arr_count) {
	for(int i = 1; i < arr_count; i++) {
		int j = i-1;
		unsigned int temp = *(arr+i);
		
		while(j > -1) {
			if(*(arr+i) > *(arr+j)) j--;
			else break;
		}
		
		for(int k = i; k>j+1; k--)
			*(arr+k) = *(arr+k-1);
		*(arr+j+1) = temp;
	}
}

int main() {
	unsigned int pal_nums[10000];
	unsigned int pal_count = 0;

	for(unsigned int i = 999; i > 0; i--)
		for(unsigned int j = 999; j > 0; j--)
			if(is_palindrome(i * j)) pal_nums[pal_count++] = i * j;

	quick_sort(pal_nums, pal_count);

	for(int i = 0; i < 100; i++)
		printf("%d ", pal_nums[i]);

	return 0;
}