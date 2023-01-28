#include <stdio.h>
#include <string.h>

// main function
int ex3(void) {

    // variable declaration
    int i;
    char acc_no[20], nic[20], name[100], acc_no_input[20], type[2];
    float balance, amount, initialBalance;

    // file pointer declaration
    FILE *cfPtr, *cfPtr2;

    // part ii

    // file open
    cfPtr = fopen("account.txt", "w");

    // file creation - error handling
    if (cfPtr == NULL) {
        printf("File \"account.txt\" failed to create"); // error message
        return -1; // terminate the process
    }

    // input for loop
    for (i = 1; i <= 4; i++) {

        // heading
        printf("Customer %d\n", i);

        // input account number
        printf("Account number: "); // prompt
        scanf("%s", acc_no);

        // input nic
        printf("NIC: "); // prompt
        scanf("%s", nic);

        // input customer name
        printf("Name: "); // prompt
        scanf("%s", name);

        // input current account balance
        printf("Account Balance: Rs. "); // prompt
        scanf("%f", &balance);

        // file writing
        fprintf(cfPtr, "%s %s %s %.2f\n", acc_no, nic, name, balance);

        printf("\n"); // formatting new line

    }

    fclose(cfPtr); // close file

    // part iii

    // enter the account number
    printf("Account number: "); // prompt
    scanf("%s", acc_no_input);

    // open file in reading mode
    cfPtr = fopen("account.txt", "r");
    cfPtr2 = fopen("transaction.txt", "r");

    // file opening - error handling
    if (cfPtr == NULL) {
        printf("File \"account.txt\" failed to open"); // error message
        return -1; // terminate the process
    }

    // read first line of the file
    fscanf(cfPtr, "%s %s %s %f", acc_no, nic, name, &balance);

    // file read and print loop
    while (!feof(cfPtr)) { // read the file until reaches to the last line

        if (!strcmp(acc_no, acc_no_input)) {
            printf("Current account balace: Rs. %.2f\n", balance); // print

            initialBalance = balance;

            // read transactions.txt - first line
            fscanf(cfPtr2, "%s %f", type, &amount); // read

            // part iv
            // read transactions.txt - other lines
            while (!feof(cfPtr2)) {

                // Deposit and withdrawal selection
                if (!strcmp(type, "D")) {
                    initialBalance += amount; // add deposists
                } else if (!strcmp(type, "W")) {
                    initialBalance -= amount; // reduce withdrawals
                }

                fscanf(cfPtr2, "%s %f", type, &amount); // read
            }

        }

        fscanf(cfPtr, "%s %s %s %f", acc_no, nic, name, &balance); // read

    }

    fclose(cfPtr); // close file "account.txt"
    fclose(cfPtr2); // close file "transaction.txt"

    // part v
    // output final updated account balance
    printf("Final updated balance: Rs. %.2f", initialBalance);

    return 0;
}