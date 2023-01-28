// Question 2

#include <stdio.h>

int main(void) {

    // variable declaration
    float distance = 0, fee = 0;

    // sentinel repetition
    while (distance != -1) {

        // input distance
        printf("Enter distance (Enter -1 to terminate): "); //prompt
        scanf("%f", &distance);

        // check the relevant charge
        if (distance > 15 ) {
            fee += 150;
        } else if (8 < distance && distance <= 15) {
            fee += 125;
        } else if (3 < distance && distance <= 8) {
            fee += 75;
        } else if (3 >= distance && distance > 0) {
            fee += 50;
        }

    }

    // output - total delivery charge
    printf("Total delivery charge: %.2f", fee);

    return 0;
}