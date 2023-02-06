#include <stdio.h>

int main(void) {

    // variable declaration
    int i, inputLoyaltyNumber, fileLoyaltyNumber, existFlag;
    char name[100], inputName[100];

    FILE *cfPtr; // file pointer

    // add upto 5 people
    for (i = 0; i < 5; i++) {

        existFlag = 0; // exist flag init / reset

        // print prompt
        printf("Person - %d\n", i + 1);

        // input loyalty number
        printf("Loyalty number: "); // prompt
        scanf("%d", &inputLoyaltyNumber);

        // input name
        printf("Name: "); // prompt
        scanf("%s", inputName);

        // open file in reading mode
        cfPtr = fopen("loyalty.dat", "r");

        // check if file exist and errors
        if (cfPtr == NULL) {
            printf("Error while opening the file \"loyalty.dat\"\n"); // error message
            return -1; // terminate the process
        }

        // read file
        while (!feof(cfPtr)) {

            // read file data
            fscanf(cfPtr, "%d %s", &fileLoyaltyNumber, name);

            // check file data and input data
            if (fileLoyaltyNumber == inputLoyaltyNumber) {
                printf("Loyalty number already exists\n"); // exist message
                existFlag = 1; // exist flag update
            }

        }

        fclose(cfPtr); // reading mode file close

        // write file - if loyalty number does not exist
        if (!existFlag) {
            // open file in appending mode
            cfPtr = fopen("loyalty.dat", "a");

            // check if file exist and errors
            if (cfPtr == NULL) {
                printf("Error while opening the file \"loyalty.dat\"\n"); // error message
                return -1; // terminate the process
            }

            fprintf(cfPtr, "\n%d %s", inputLoyaltyNumber, inputName); // append file

            printf("Person - %d added to the list\n", i + 1);

            fclose(cfPtr); // close file
        }

        printf("\n"); // formatting newline

    }

    return 0;
}