#include <stdio.h>
#include <string.h>

int main(void) {

    int i, red;

    // lowercase string
    char string[] = "\ndo not go gentle into that good night,\"old age should burn and rave at close of day;\"rage, rage against the dying of the light.";

    // convert to uppercase
    for (i = 0; i < strlen(string) && string[i] != '\0'; i++) {
        if (string[i] == '\"')
            printf("\n");
        else {
            if (96 < (int) string[i] && 123 > (int) string[i])
                red = 32;
            else
                red = 0;
            printf("%c", string[i] - red);
        }
    }


    return 0;
}