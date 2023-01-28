#include <stdio.h>

int a(void) {

    // variable declaration
    int type, days;
    char accommodation, reward;
    float amount;

    // input type of room
    printf("Enter type of room: "); // prompt
    scanf("%d", &type);

    while (type != -1) {

        // amount value initialize (reset)
        amount = 0;

        // input accommodation basis
        printf("Enter Accommodation Basis (F/H): ");
        scanf(" %c", &accommodation);

        // input number of days
        printf("Enter No of days : ");
        scanf("%d", &days);

        // input reward card type
        printf("Enter Reward Card Type ( G, S, B ): ");
        scanf(" %c", &reward);

        // room type selection
        if (type == 1) {
            // accommodation selection
            switch (accommodation) {
                case 'F':
                    amount += 25555.00;
                    break;
                case 'H':
                    amount += 17250.00;
                    break;
            }
        } else if (type == 2) {
            // accommodation selection
            switch (accommodation) {
                case 'F':
                    amount += 17500.00;
                    break;
                case 'H':
                    amount += 12250.00;
                    break;
            }
        } else if (type == 3) {
            // accommodation selection
            switch (accommodation) {
                case 'F':
                    amount += 9000.00;
                    break;
                case 'H':
                    amount += 7250.00;
                    break;
            }
        } else {
            // error message - invalid room type
            printf("Invalid Type of room\n");
        }

        // amount calculation
        amount = amount * days;

        // reward selection and discount calculation
        switch (reward) {
            case 'G':
                amount = amount - (amount * 12.5 / 100);
                break;
            case 'S':
                amount = amount - (amount * 11.5 / 100);
                break;
            case 'B':
                amount = amount - (amount * 9.5 / 100);
                break;
        }

        // amount output
        printf("Amount(Rs.) : %.2f\n", amount);

        // input type of room
        printf("\nEnter type of room: "); // prompt
        scanf("%d", &type);

    }

    return 0;
}