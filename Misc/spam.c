

//#include <stdio.h>
//
//int s1(void) {
//
//    // variable declaration
//    int type;
//    float amount, discount = 0, total;
//
//    // input customer type
//    printf("Customer Type: "); // prompt
//    scanf("%d", &type);
//
//    // input bill amount
//    printf("Bill Amount: Rs. "); // prompt
//    scanf("%f", &amount);
//
//    // selection
//    if (type == 1 && amount <= 2000) {
//        discount = amount * 15.0 / 100;
//    } else if (type == 1 && amount > 2000) {
//        discount = amount * 25.0 / 100;
//    } else if (type == 2 && amount > 3000) {
//        discount = amount * 15.0 / 100;
//    }
//
//    // total price calculation
//    total = amount - discount;
//
//    // output
//    printf("Customer Type: %d\n", type);
//    printf("Bill Amount: Rs. %.2f\n", amount);
//    printf("Discount Amount: Rs. %.2f\n", discount);
//    printf("Final Bill Amount: Rs. %.2f\n", total);
//
//    return 0;
//
//}

//
//#include <stdio.h>
//
//int main (void) {
//
//    int type, days;
//    float fine = 0, rental = 0;
//
//    // input book type
//    printf("Book Type: "); // prompt
//    scanf("%d", &type);
//
//    // input rented days
//    printf("Rented days: "); // prompt
//    scanf("%d", &days);
//
//    if (type == 1) {
//        printf("Rental per day: Rs. 10.00\n");
//
//        if (days > 14) {
//            // rental amount calculation
//            rental = days * 10 + (days * 10 * 10 / 100);
//        } else {
//            // rental amount calculation
//            rental = days * 10;
//        }
//
//    } else if (type == 2) {
//        printf("Rental per day: Rs. 8.00\n");
//
//        if (days > 14) {
//            // rental amount calculation
//            rental = days * 8 + (days * 8 * 10 / 100);
//        } else {
//            // rental amount calculation
//            rental = days * 8;
//        }
//
//    }
//
//    printf("Rental Amount: Rs. %.2f", rental);
//
//    return 0;
//}