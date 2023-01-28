#include <stdio.h>

int main(void) {

    // variable declaration
    int room, guests, days, tour;
    char confirmation;
    float amount = 0;

    // input room option
    printf("Input Room Option: "); // prompt
    scanf("%d", &room);

    // Input number of guests
    printf("Number of guests: "); // prompt
    scanf("%d", &guests);

    // Input number of days
    printf("Number of Days: "); // prompt
    scanf("%d", &days);

    if (room == 1) { // room option selector - 1

        // guest count selector
        if (guests > 0 && guests <= 2) {
            amount += 45000.00 * guests;
        } else if (guests > 2 && guests <= 5) {
            amount += 44000.00 * guests;
        } else if (guests > 5) {
            amount += 43000.00 * guests;
        } else {
            printf("Guest count should be more than 0\n");
        }

    } else if (room == 2) { // room option selector - 2

        // guest count selector
        if (guests > 0 && guests <= 2) {
            amount += 40000.00 * guests;
        } else if (guests > 2 && guests <= 5) {
            amount += 38000.00 * guests;
        } else if (guests > 5) {
            amount += 35000.00 * guests;
        } else {
            printf("Guest count should be more than 0\n");
        }

    } else if (room == 3) { // room option selector - 3

        // guest count selector
        if (guests > 0 && guests <= 2) {
            amount += 37500.00 * guests;
        } else if (guests > 2 && guests <= 5) {
            amount += 35000.00 * guests;
        } else if (guests > 5) {
            amount += 32000.00 * guests;
        } else {
            printf("Guest count should be more than 0\n");
        }

    } else {
        printf("Invalid room option\n");
    }

    // amount calculator
    amount = amount * days;

    // input additional tour confirmation - 1st
    printf("Do you need any additional tours (y/n): "); //prompt
    scanf(" %c", &confirmation);

    // Additional tour loop
    while (confirmation == 'y' || confirmation == 'Y') {

        // Input additional tour
        printf("Input your option: "); // prompt
        scanf("%d", &tour);

        // additional tour selector
        switch (tour) {
            case 1:
                amount += 3500 * guests;
                break;
            case 2:
                amount += 1000 * guests;
                break;
            case 3:
                amount += 1500 * guests;
                break;
            case 4:
                amount += 2000 * guests;
                break;
            default:
                printf("Invalid tour option\n");
                break;
        }

        // input additional tour confirmation - 2nd
        printf("Do you need any additional tours (y/n): "); //prompt
        scanf(" %c", &confirmation);

    }

    // confirmation option error message
    if (confirmation != 'y' && confirmation != 'Y' && confirmation != 'n' && confirmation != 'N')
        printf("Invalid confirmation option\n");

    // total amount output
    printf("Total Price: %.2f", amount);

    return 0;
}