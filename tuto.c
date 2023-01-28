#include <stdio.h>

int main() {

//    // variable declaration
//    int number;
//
//    // input number
//    printf("Input the number: ");
//    scanf("%d", &number);
//
//    // check number
//    if (number >= 0) {
//        printf("%d", number);
//    } else {
//        printf("%d", -1 * number);
//    }


//    char type;
//    double amount, balance;
//
//    // input
//    printf("Transaction type (w - withdrawal/ d - deposit): "); // prompt
//    type = getchar();
//
//    printf("Amount: "); // prompt
//    scanf("%lf", &amount);
//
//    printf("Bank balance: "); // prompt
//    scanf("%lf", &balance);
//
//
//    // condition
//    if (type == 'w' || type == 'W') {
//        printf("You have selected to withdraw money\n");
//        printf("New balance is: %.2f", balance - amount);
//
//    } else if (type == 'd' || type == 'D') {
//        printf("You have selected to deposit money\n");
//        printf("New balance is: %.2f", balance + amount);
//
//    } else {
//        printf("You have selected an invalid transaction type");
//    }


//
//    char op;
//    double number1, number2;
//
//    printf("Input number 1: ");
//    scanf("%lf", &number1);
//
//    printf("Input operator: ");
//    scanf("%s", &op);
//
//    printf("Input number 2: ");
//    scanf("%lf", &number2);
//
//    if (op == '+') {
//        printf("Answer: %.3f", number1 + number2);
//    } else if (op == '-') {
//        printf("Answer: %.3f", number1 - number2);
//    } else if (op == '*') {
//        printf("Answer: %.3f", number1 * number2);
//    } else if (op == '/') {
//        printf("Answer: %.3f", number1 / number2);
//    } else {
//        printf("Invalid operator");
//    }
//

    char op;
    double number1, number2;

    printf("Input number 1: ");
    scanf("%lf", &number1);

    printf("Input operator: ");
    scanf("%s", &op);

    printf("Input number 2: ");
    scanf("%lf", &number2);

    switch (op) {
        case '+':
            printf("Answer: %.3f", number1 + number2);
            break;
        case '-':
            printf("Answer: %.3f", number1 - number2);
            break;
        case '*':
            printf("Answer: %.3f", number1 * number2);
            break;
        case '/':
            printf("Answer: %.3f", number1 / number2);
            break;
        default:
            printf("Invalid operator");
            break;
    }


    return 0;
}