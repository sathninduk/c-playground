// Version A - 1
#include <stdio.h>

// main function
int main(void) {

    // variable declaration
    int i, j;

    // outer for loop
    for (i = 97; i <= 101; ++i) {
        // inner for loop
        for (j = 1; j <= i - 96; ++j) {
            printf("%c", i); // print output
        }
        printf("\n"); // newline
    }

    return 0;
}