#include <stdio.h>

int main (void) {
	
	// array declaration
	int motion[5];
	
	// variable declaration
	int i, tempFirst;
	
	// input loop
	for (i == 0; i < 5; ++i) {
		
		// input integer
		printf ("Input integer: "); // prompt
		scanf("%d", &motion[i]);
		
	}
	
	// output prompt - initial values
	printf("initial values: ");
	
	// output loop - initial values
	for (i = 0; i < 5; ++i) {
		// print initial values
		printf(" %d ", motion[i]);
	}
	
	// temporary stores the first value
	tempFirst = motion[0];
	
	// rotation loop
	for (i = 0; i < 5; ++i) {
		if (i == 4)
			motion[i] = tempFirst;
		else
			motion[i] = motion[i + 1];
	}
	
	// output prompt - rotated values
	printf("\nAfter rotating: ");
	
	// output loop - rotated values
	for (i = 0; i < 5; ++i) {
		// print rotated values
		printf(" %d ", motion[i]);	
	}
	

	
}
