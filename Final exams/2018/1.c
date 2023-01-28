#include <stdio.h>

struct students {
    int count;
    float price;
} courseH, courseM, courseF;

// main function
int main(void) {

    // variable declaration
    int i;
    char course;

    // struct variable value initializing
    courseH.count = 0;
    courseM.count = 0;
    courseF.count = 0;
    courseH.price = 0;
    courseM.price = 0;
    courseF.price = 0;

    // input termination instruction output
    printf("Please enter X (or x) when you want to stop entering.\n");

    // 1 to 100 for loop for user inputs
    for (i = 1; i <= 100; i++) {

        // input course type
        printf("Enter course type: "); // prompt
        scanf(" %c", &course);

        // loop termination command (X) check
        if (course == 'X' || course == 'x') {
            break;
        }

        // course selection
        if (course == 'H' || course == 'h') {

            courseH.count++;
            courseH.price += 1500.0;

        } else if (course == 'M' || course == 'm') {

            courseM.count++;
            courseM.price += 2000.0;

        } else if (course == 'F' || course == 'f') {

            courseF.count++;
            courseF.price += 2500.0;

        } else {
            printf("Invalid course type\n"); // error message
            i--;
        }

    }


    // final output

    // course H
    printf("Course H\n");
    printf("Total students: %d\n", courseH.count);
    printf("Total registration fee (earned): Rs. %.2f\n", courseH.price);

    // course M
    printf("\nCourse M\n");
    printf("Total students: %d\n", courseM.count);
    printf("Total registration fee (earned): Rs. %.2f\n", courseM.price);

    // course F
    printf("\nCourse F\n");
    printf("Total students: %d\n", courseF.count);
    printf("Total registration fee (earned): Rs. %.2f\n", courseF.price);

    return 0;
}