#include <stdio.h>

int main (void) {
	
	// array declaration
	float marks[10] = {0}; 
	
	// variable declaration
	int i;
	float input, sum = 0, mean;
	
	// input loop
	for (i = 0; i < 10; ++i) {
		
		// input mark
		printf("Input mark: "); // prompt
		scanf("%f", &input);
		
		if (input >= 0 && input <= 20)
			marks[i] = input;
		else {
			printf("Invalid mark\n");
			--i;
			continue;
		}
		
	}
	
	// print marks
	for (i = 0; i < 10; ++i) {
		printf("%.3f\n", marks[i]);
		sum += marks[i];
	}
		
	// mean calculation
	mean = sum / 10.0;
	
	// print mean
	printf("Mean of marks: %.3f", mean);
	
	return 0;
}
