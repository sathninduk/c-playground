// tutorial 9 - ex 2
#include <stdio.h>

int ex2(void) {

    // array declaration
    int array1[4][4] = {
            {5, 7, 8, 10},
            {9, 3, 0, 6},
            {8, 1, 9, 2},
            {4, 7, 2, 1}
    }; // matrix 1
    int array2[4][4] = {
            {2, 2, 1, 3},
            {8, 1, 3, 1},
            {1, 2, 2, 4},
            {3, 1, 1, 2}
    }; // matrix 2
    int sumArray[4][4]; // matrix sum

    // variable declaration
    int i, j;

    // calculation and storing for loop
    for (i = 0; i < 4; i++) { // outer for loop
        for (j = 0; j < 4; j++) { // inner for loop
            sumArray[i][j] = array1[i][j] + array2[i][j]; // matrices addition
        }
    }

    // output for loop
    for (i = 0; i < 4; i++) { // outer for loop
        for (j = 0; j < 4; j++) { // inner for loop
            printf("%3d ", sumArray[i][j]); // print the summed matrix
        }
        printf("\n"); // newline
    }

    return 0;
}