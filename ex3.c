#include <stdio.h>

int main(void) {

    int program;
    float fee = 0;

    for (int i = 1; i <= 100; ++i) {

        // Input program number
        printf("Enter program number (1, 2, 3): "); //prompt
        scanf("%d", &program);

        // terminate when input -99
        if (program == -99)
            break;

        // switch program
        switch (program) {
            case 1:
                fee += 1500;
                break;
            case 2:
                fee += 1000;
                break;
            case 3:
                fee += 2000;
                break;
        }
    }

    // output total fee
    printf("Total fee: %.2f", fee);

    return 0;
}