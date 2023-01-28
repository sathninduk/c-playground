#include <stdio.h>

int c(void) {

    // variable declaration
    int option, number, toppings_option;
    char size, toppings = 'Y';
    float total = 0;

    // input pizza option
    printf("Input Pizza Option: "); // prompt
    scanf("%d", &option);

    // input pizza size
    printf("Size of the Pizza (P/M/L): "); // prompt
    scanf(" %c ", &size);

    // options selector
    if (option == 1) {
        if (size == 'P')
            total += 560;
        else if (size == 'M')
            total += 920;
        else if (size == 'L')
            total += 1800;
        else
            printf("Invalid Pizza Size\n");
    } else if (option == 2) {
        if (size == 'P')
            total += 340;
        else if (size == 'M')
            total += 660;
        else if (size == 'L')
            total += 1300;
        else
            printf("Invalid Pizza Size\n");
    } else if (option == 3) {
        if (size == 'P')
            total += 760;
        else if (size == 'M')
            total += 1100;
        else if (size == 'L')
            total += 2100;
        else
            printf("Invalid Pizza Size\n");
    } else {
        printf("Invalid Pizza Option\n");
    }

    // input number of pizza
    printf("Number of Pizzas: ");
    scanf("%d", &number);

    while (1) {

        // input toppings - conformation
        printf(" Do you need any extra toppings (y/n): "); // prompt
        scanf(" %c ", &toppings);

        if (toppings == 'N' || toppings == 'n')
            break; // terminate the loop if user inputs either 'n' or 'N'
        else if (toppings != 'Y' && toppings != 'y') {
            printf("Invalid option\n"); // error message
            continue;
        }

        // input toppings option
        printf("Input your option: "); // prompt
        scanf("%d", &toppings_option);

        // toppings option selector
        switch (toppings_option) {
            case 1:
                total += 320;
                break;

            case 2:
                total += 140;
                break;

            case 3:
                total += 130;
                break;

            case 4:
                total += 150;
                break;
            default:
                printf("Invalid option\n");
                break;
        }

    }

    // print output - total price
    printf("Total Price Rs: %.2f", total * number); // prompt


    return 0;
}