// matrices multiplication
#include <stdio.h>
#define SIZE 4

// main function
int main(void) {

//    // variable declaration
//    int x = 0, y = 0, m, n;

//    // array declaration
//    int array1[x][y], array2[x][y];
    int resultArray[SIZE][SIZE] = {0}; // resultant matrix
//
//    // input matrix row size
//    printf("Matrix row size: "); // prompt
//    scanf("%d", &x);
//
//    // input matrix column column size
//    printf("Matrix column size: "); // prompt
//    scanf("%d", &y);
//
//    printf("\n"); // formatting newline
//
//    // array 1 - input for loop
//    printf("Input matrix 1: \n");
//    for (m = 0; m < x; m++) {
//        printf("Row %d\n", m + 1);
//        for (n = 0; n < y; n++) {
//            // input element
//            printf("Element [%d, %d]: ", m + 1, n + 1); // prompt
//            scanf("%d", &array1[m][n]);
//        }
//        printf("\n");
//    }
//
//    // array 2 - input for loop
//    printf("Input matrix 2: \n");
//    for (m = 0; m < x; m++) {
//        printf("Row %d\n", m + 1);
//        for (n = 0; n < y; n++) {
//            // input element
//            printf("Element [%d, %d]: ", m + 1, n + 1); // prompt
//            scanf("%d", &array2[m][n]);
//        }
//        printf("\n");
//    }
//
//    // array 1 - output
//    printf("Matrix 1: \n");
//    for (m = 0; m < x; m++) {
//        for (n = 0; n < y; n++) {
//            printf("%3d", array1[m][n]);
//        }
//        printf("\n");
//    }
//
//    printf("\n"); // formatting newline
//
//    // array 2 - output
//    printf("Matrix 2: \n");
//    for (m = 0; m < x; m++) {
//        for (n = 0; n < y; n++) {
//            printf("%3d", array2[m][n]);
//        }
//        printf("\n");
//    }
//
//    printf("\n"); // formatting newline

    // array declaration
    // matrix 1
    int array1[SIZE][SIZE] = {
            {5, 7, 8, 10},
            {9, 3, 0, 6},
            {8, 1, 9, 2},
            {4, 7, 2, 1}
    };

    // matrix 2
    int array2[SIZE][SIZE] = {
            {2, 2, 1, 3},
            {8, 1, 3, 1},
            {1, 2, 2, 4},
            {3, 1, 1, 2}
    };

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
//    printf("Answer (matrix1 . matrix2): \n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%3d ", resultArray[i][j]);
        }
        printf("\n"); // new line
    }

    return 0;
}