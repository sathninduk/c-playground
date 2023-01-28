#include <stdio.h>

// main function
int main(void) {

    // variable declaration
    int i, j;
    char lights[4][4];

    // input loop
    // outer loop for rows
    for (i = 0; i < 4; i++) {
        // inner loop for columns
        for (j = 0; j < 4; j++) {

            // input light colour
            printf("Enter LED bulb (%d, %d) - color (R/G/B): ", i, j); // prompt
            scanf(" %c", &lights[i][j]);

        }
    }

    // print loop
    // outer loop for rows
    for (i = 0; i < 4; i++) {
        // inner loop for columns
        for (j = 0; j < 4; j++) {
            printf("%3c", lights[i][j]); // print colour
        }
        printf("\n"); // new line for the next row
    }

    // print red bulb positions
    printf("\nRed LED bulb positions\n"); // prompt

    // print positions loop
    // outer loop for rows
    for (i = 0; i < 4; i++) {
        // inner loop for columns
        for (j = 0; j < 4; j++) {

            // select only red lights
            if (lights[i][j] == 'R')
                printf("[%d, %d] ", i, j); // print position

        }
    }


    return 0;
}