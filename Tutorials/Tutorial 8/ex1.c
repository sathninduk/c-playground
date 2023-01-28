#include <stdio.h>

int main (void) {
	
	// array declaration
	int marks[10] = {0}; 
	
	// variable declaration
	int i, input;
	
	// input loop
	for (i = 0; i < 10; ++i) {
		
		// input mark
		printf("Input mark: "); // prompt
		scanf("%d", &input);
		
		if (input >= 0 && input <= 20)
			marks[i] = input;
		else {
			printf("Invalid mark\n");
			--i;
			continue;
		}
		
	}
	
	// print output
	for (i = 0; i < 10; ++i)
		printf("%d\n", marks[i]);
	
	return 0;
}
