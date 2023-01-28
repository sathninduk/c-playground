// tutorial 9 - ex1
#include <stdio.h>
#include <string.h>
#define SIZE 100

// main function
int ex1 (void) {

    // variable declaration
    char word[SIZE];
    int i, stringLength, palindromeFlag = 1;

    // input word
    printf("Input word: "); // prompt
    scanf("%s", word);

    // assign string length
    stringLength = strlen(word);

    // string loop
    for (i = 0; i < stringLength / 2; i++) {

        // check that the corresponding characters are the same
        if (word[i] != word[stringLength - 1 - i]) {
            printf("%s is not a palindrome\n", word); // not a palindrome message
            palindromeFlag = 0; // update palindromeFlag
            break; // break the for loop
        }

    }

    // output palindrome message
    if (palindromeFlag) // if palindromeFlag == 1, it's a palindrome else if palindromeFlag == 0, it isn't
        printf("%s is a palindrome\n", word);

    return 0;
}