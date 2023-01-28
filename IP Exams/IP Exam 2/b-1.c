// Version B - 1
#include <stdio.h>

// main function
int main(void) {

    // variable declaration
    int i, j;

    // outer for loop
    for (i = 97; i <= 101; ++i) {
        // inner for loop
        for (j = 1; j <= 102 - i; ++j) {
            printf("%c", i); // output
        }
        printf("\n"); // newline
    }

    return 0;
}