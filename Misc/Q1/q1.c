#include <stdio.h>
#include <string.h>

// structure
struct transactionData {
    int accNo;
    char name[100], type;
    float amount;
} transactions[5]; // array

// main function
int main(void) {

    // variable declaration
    int i;
    float totalDeposits = 0, totalWithdrawals = 0, maxDeposits = 0, maxWithdrawals = 0;
    char maxDepositsName[100], maxWithdrawalsName[100];

    // input for loop
    for (i = 0; i < 5; i++) {

        printf("Transaction %d\n", i + 1);

        // input account number
        printf("Account number: "); // prompt
        scanf("%d", &transactions[i].accNo);

        // input name
        printf("Name: "); //prompt
        scanf("%s", transactions[i].name);

        // input transaction type
        printf("Transaction type (w / d): "); // prompt
        scanf(" %c", &transactions[i].type);

        // input amount
        printf("Amount: Rs. "); // prompt
        scanf("%f", &transactions[i].amount);

        printf("\n");

    }

    for (i = 0; i < 5; ++i) {

        // transaction type selector
        if (transactions[i].type == 'd') {

            // append deposit amount
            totalDeposits += transactions[i].amount;

            // max deposits selector
            if (maxDeposits < transactions[i].amount) {
                maxDeposits = transactions[i].amount;
                strcpy(maxDepositsName, transactions[i].name);
            }

        } else if (transactions[i].type == 'w') {

            // append withdrawal amount
            totalWithdrawals += transactions[i].amount;

            // max deposits selector
            if (maxWithdrawals < transactions[i].amount) {
                maxWithdrawals = transactions[i].amount;
                strcpy(maxWithdrawalsName, transactions[i].name);
            }

        }

    }

    // print final output
    printf("Total deposits: Rs. %.2f\n", totalDeposits);
    printf("Total withdrawals: Rs. %.2f\n", totalWithdrawals);
    printf("Maximum deposits account holder: %s\n", maxDepositsName);
    printf("Maximum withdrawals account holder: %s\n", maxWithdrawalsName);

    return 0;
}