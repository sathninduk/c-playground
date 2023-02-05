#include <stdio.h>

#define SIZE1 2
#define SIZE2 3

// main function
int main(void) {

    // variable declaration
    int i, j, tsr = 0, tsc = 0, sr, sc;

    // array declarations
    int a[SIZE1][SIZE2];

    // input loop
    for (i = 0; i < SIZE1; ++i) { // outer loop
        for (j = 0; j < SIZE2; ++j) { // inner loop
            // input matrix element
            printf("Enter value for matrix [%d, %d]: ", i + 1, j + 1); // prompt
            scanf("%d", &a[i][j]);
        }
    }

    // matrix printing loop
    for (i = 0; i < SIZE1; ++i) { // outer loop
        for (j = 0; j < SIZE2; ++j) { // inner loop
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    // row sum calculation loop
    for (i = 0; i < SIZE1; ++i) { // outer loop
        sr = 0; // reset and init sr
        for (j = 0; j < SIZE2; ++j) { // inner loop
            sr += a[i][j];
        }
        printf("The sr%d is : %d\n", i + 1, sr); // output row sum
        tsr += sr; // append row sum
    }

    // column sum calculation loop
    for (j = 0; j < SIZE2; ++j) {
        sc = 0; // reset and init sc
        for (i = 0; i < SIZE1; ++i) {
            sc += a[i][j]; // append column sum
        }
        printf("The sc%d is : %d\n", j + 1, sc); // output column sum
        tsc += sc; // append column sum
    }

    // output total sums
    printf("The tsr is : %d\n", tsr); // row
    printf("The tsc is : %d\n", tsc); // column

    return 0;

}