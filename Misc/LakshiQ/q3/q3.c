#include <stdio.h>

int main(void) {

    int i, n;
    int numArray[8], movedArray[8] = {0};

    // shifting number input
    printf("Shifting number (n): ");
    scanf("%d", &n);

    // array input
    for (i = 0; i < 8; i++) {
        printf("Enter value [%d]: ", i + 1);
        scanf("%d", &numArray[i]);
    }

    // original array print
    for (i = 0; i < 8; i++) {
        printf("%d\t", numArray[i]);
    }

    // array shifting
    for (i = 0; i < 8; i++) {
        if (i - n < 0) {
            movedArray[i] = numArray[8 - (n - i)];
        } else {
            movedArray[i] = numArray[i - n];
        }
    }

    printf("\n");

    // new array print
    for (i = 0; i < 8; i++) {
        printf("%d\t", movedArray[i]);
    }


    return 0;
}