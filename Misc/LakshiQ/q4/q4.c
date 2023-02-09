#include <stdio.h>
#include <math.h>

int main(void) {

    int number, i;

    while (1) {
        printf("Enter a four digit number: ");
        scanf("%d", &number);

        if (number <= 9999 && number >= 1000) {
            for (i = 3; i >= 0; i--) {
                if (number % (int) pow(10, i + 1) / (int) pow(10, i) != number / (int) pow(10, 3 - i) % 10) {
                    printf("Not a palindrome");
                    return -1;
                }
            }
            break;
        } else
            printf("Invalid number.\n");
    }

    printf("A palindrome");

    return 0;
}