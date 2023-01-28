#include <stdio.h>
#define SIZE 5

int a23 (void) {

    char string1[] = {'f', 'i', 'r', 's', 't', '\0'};
//    char string2[] = "first";

    for (int i = 0; i < SIZE && string1[i] != '\0'; ++i) {
        printf("%c\n", string1[i]);
    }

    return 0;
}