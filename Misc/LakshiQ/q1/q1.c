#include <stdio.h>

// functions declaration
void inputUnits(int array[], size_t size);

void calculateBill(int array1[], int array2[], size_t size);

// main function
int main(void) {

    // variable declaration
    int j;

    // array declaration
    int array[7] = {0};

    // inputs of two weeks
    for (j = 0; j < 2; j++) {

        // call function - inputUnits
        printf("Week %d\n", j + 1); // prompt
        inputUnits(array, 7);

        printf("\n"); // newline formatting
    }

    return 0;
}

// function inputUnits to input units
void inputUnits(int array[], size_t size) {

    // array declaration
    int array2[7] = {0};

    // variable declaration
    int i;
    int weekUnits;

    // input for loop
    for (i = 0; i < size; i++) {

        // householder prompt
        printf("Householder %d (units): ", i + 1); // prompt
        scanf("%d", &weekUnits);

        // unit range check - selection
        if (weekUnits >= 0 && weekUnits <= 100)
            array[i] = weekUnits; // assign to the array
        else {
            printf("Invalid units, Enter again!\n"); // error message
            i--; // decrement count by 1 to retake the input
        }

    }

    calculateBill(array, array2, 7);


}

void calculateBill(int array1[], int array2[], size_t size) {

    int i;

    printf("\nTotal bills\n");

    // bill calculation
    for (i = 0; i <= size; i++) {
        if (array1[i] >= 51) {
            array2[i] = 150 * array1[i] + 300;
        } else if (array1[i] >= 41) {
            array2[i] = 100 * array1[i] + 300;
        } else if (array1[i] >= 31) {
            array2[i] = 50 * array1[i] + 300;
        } else if (array1[i] >= 21) {
            array2[i] = 30 * array1[i] + 300;
        } else if (array1[i] >= 11) {
            array2[i] = 15 * array1[i] + 300;
        } else if (array1[i] >= 0) {
            array2[i] = 10 * array1[i] + 300;
        }
    }

    // bill output
    for (i = 0; i <= size; i++) {
        printf("Householder %d: Rs. %.2f\n", i + 1, (float) array2[i]);
    }

}