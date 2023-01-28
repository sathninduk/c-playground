// Version E - 1
#include <stdio.h>

// main function
int main(void) {

    // variable declaration
    int count = 0;
    float mark = 0, max = 0, min = 100;


    // input gathering loop
    while (mark != -99) {

        // input mark
        printf("Input mark: "); //prompt
        scanf("%f", &mark);

        // marks range selection
        if (mark > 100 || mark < 0) {
            // bypass error message only for -99
            if (mark != -99)
                printf("Invalid marks\n"); // print error message
            continue; // continue to the next input
        }

        // max selection
        if (max < mark) {
            max = mark;
        }

        // min selection
        if (min > mark) {
            min = mark;
        }

        count++;

    }

    // inputs count selection
    if (count == 0) {
        // print output
        printf("Max mark: No marks input\n");
        printf("Min mark: No marks input\n");
    } else {
        // print output
        printf("Max mark: %.3f\n", max);
        printf("Min mark: %.3f\n", min);
    }

    return 0;
}