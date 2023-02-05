#include <stdio.h>

#define ROW_SIZE 3
#define COL_SIZE 3

int main(void) {

    // array declaration
    int identityArr[ROW_SIZE][COL_SIZE];

    // variable declaration
    int i, j;

    // input loop
    for (i = 0; i < ROW_SIZE; i++) {

        // heading prompt
        printf("Values for row %d\n", i + 1);

        for (j = 0; j < COL_SIZE; j++) {
            // input element
            printf("Enter element %d: ", j + 1); // prompt
            scanf("%d", &identityArr[i][j]);
        }

        printf("\n"); // formatting newline
    }

    for (i = 0; i < ROW_SIZE; i++) {
        for (j = 0; j < COL_SIZE; j++) {
            if (i != j) {
                if (identityArr[i][j] != identityArr[j][i]) {
                    printf("Not a symmetric matrix"); // not identity matrix message
                    return -1; // terminate process
                }
            }
        }
    }

    // identity matrix output
    printf("A symmetric matrix");

    return 0;
}