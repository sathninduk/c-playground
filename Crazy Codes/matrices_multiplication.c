// matrices multiplication
#include <stdio.h>
#define SIZE 4

// main function
int main(void) {

    // array declaration
    // matrix 1
    int array1[4][4] = {
            {5, 7, 8, 10},
            {9, 3, 0, 6},
            {8, 1, 9, 2},
            {4, 7, 2, 1}
    };

    // matrix 2
    int array2[4][4] = {
            {2, 2, 1, 3},
            {8, 1, 3, 1},
            {1, 2, 2, 4},
            {3, 1, 1, 2}
    };

    // resultant matrix
    int resultArray[SIZE][SIZE] = {0};

    // variable declaration
    int i, j, k;

    // calculation for loop
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            for (k = 0; k < SIZE; k++) {
                resultArray[i][j] += array1[i][k] * array2[k][j];
            }
        }
    }

    // output for loop
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%3d ", resultArray[i][j]);
        }
        printf("\n"); // new line
    }

    return 0;
}