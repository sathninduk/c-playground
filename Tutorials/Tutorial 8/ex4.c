#include <stdio.h>

int main (void) {
	
	// array declaration
	int array[10];
	
	// variable declaration
	int i, j;
	
	// input loop
	for (i == 0; i < 10; ++i) {
		// input integer
		printf ("Input integer: "); // prompt
		scanf("%d", &array[i]);	
	}
	
	printf("%s %9s %15s\n", "Element", "Value", "Histogram");
	
		// output loop
	for (i = 0; i < 10; ++i) {
		
		// print index and value
		printf("%d %12d ", i, array[i]);
		
		// print histogram
		for (j = 1; j <= array[i]; ++j) {
			if (j == 1)
				printf("%10s", "*");
			else
				printf("%s", "*");
		}
		
		printf("\n");
	}
	
	return 0;
}
