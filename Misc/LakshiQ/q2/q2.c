#include <stdio.h>

// main function
int main(void) {

    // variable declaration
    char char1, char2;
    int lines, i, j;

    // input character 1
    printf("Enter 1st character: "); // prompt
    scanf("%c", &char1);

    // input character 2
    printf("Enter 2nd character: "); // prompt
    scanf(" %c", &char2);

    // input number of lines
    printf("Enter number of lines: "); // prompt
    scanf("%d", &lines);

    // output loop
    for (i = 1; i <= lines; i++) { // outer loop
        for (j = 1; j <= i; j++) { // inner loop
            if (j % 2 == 0)
                printf("%c", char2); // print character 2
            else
                printf("%c", char1); // print character 1
        }
        printf("\n"); // formatting newline
    }

    return 0;
}