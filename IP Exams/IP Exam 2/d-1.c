// Version D - 1
#include <stdio.h>

// main function
int main(void) {

    // variable declaration
    int i, j, k;

    // outer for loop
    for (i = 2; i >= 1; --i) {
        // inner for loop - 1
        for (j = 2; j >= 1; --j) {
            // inner for loop - 2
            for (k = 2; k >= 1; --k) {
                printf("[ %d %d %d ]\n", i, j, k); // output
            }
        }
    }

    return 0;
}