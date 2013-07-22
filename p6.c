#include <stdio.h>
#include <math.h>

int main() {
	float sum_of_squares = 0;
	float square_of_sum = 0;

	for(unsigned int i = 1; i < 101; i++) {
		sum_of_squares += pow(i, 2);
		square_of_sum += i;
	}
 
	printf("%f ", square_of_sum);
	printf("%f ", sum_of_squares);

	square_of_sum = pow(square_of_sum, 2);
	printf("%f", square_of_sum - sum_of_squares);

	return 0;
}