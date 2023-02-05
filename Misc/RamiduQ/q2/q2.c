#include <stdio.h>

#define ROW_SIZE 4
#define COL_SIZE 4

int main(void) {

    // array declaration
    int image[ROW_SIZE][COL_SIZE];
    int bwImage[ROW_SIZE][COL_SIZE];

    // variable declaration
    int i, j;

    // input loop
    for (i = 0; i < ROW_SIZE; i++) {

        // heading prompt
        printf("Values for row %d\n", i + 1);

        for (j = 0; j < COL_SIZE; j++) {
            // input element
            printf("Enter element %d: ", j + 1); // prompt
            scanf("%d", &image[i][j]);
        }

        printf("\n"); // formatting newline
    }

    for (i = 0; i < ROW_SIZE; i++) {
        for (j = 0; j < COL_SIZE; j++) {
            if (image[i][j] >= 55) {
                bwImage[i][j] = 1;
            } else if (image[i][j] < 55) {
                bwImage[i][j] = 0;
            }
        }
    }

    // output arrays

    // image array
    for (i = 0; i < ROW_SIZE; i++) {
        for (j = 0; j < COL_SIZE; j++) {
            printf("%6d", image[i][j]);
        }
        printf("\n");
    }

    printf("\n"); // formatting newline

    // black and white image array
    for (i = 0; i < ROW_SIZE; i++) {
        for (j = 0; j < COL_SIZE; j++) {
            printf("%3d", bwImage[i][j]);
        }
        printf("\n");
    }


    return 0;
}