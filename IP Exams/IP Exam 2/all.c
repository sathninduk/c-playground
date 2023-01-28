//// Version E - 1
//#include <stdio.h>
//
//// main function
//int main(void) {
//
//    // variable declaration
//    int count = 0;
//    float mark = 0, max = 0, min = 100;
//
//
//    // input gathering loop
//    while (mark != -99) {
//
//        // input mark
//        printf("Input mark: "); //prompt
//        scanf("%f", &mark);
//
//        // marks range selection
//        if (mark > 100 || mark < 0) {
//            // bypass error message only for -99
//            if (mark != -99)
//                printf("Invalid marks\n"); // print error message
//            continue; // continue to the next input
//        }
//
//        // max selection
//        if (max < mark) {
//            max = mark;
//        }
//
//        // min selection
//        if (min > mark) {
//            min = mark;
//        }
//
//        count++;
//
//    }
//
//    // inputs count selection
//    if (count == 0) {
//        // print output
//        printf("Max mark: No marks input\n");
//        printf("Min mark: No marks input\n");
//    } else {
//        // print output
//        printf("Max mark: %.3f\n", max);
//        printf("Min mark: %.3f\n", min);
//    }
//
//    return 0;
//}

// Version D - 2
#include <stdio.h>

//// function declaration
//float calculateTotalCost(int itemNo, int quantity);
//void printDetails(int itemNo, int quantity, float totalCost);
//
//// main function
//int main (void) {
//
//    // variable declaration
//
//
//    return 0;
//}
//
//// total calculate function
//float calculateTotalCost(int itemNo, int quantity) {
//
//}
//
//// print details function
//void printDetails(int itemNo, int quantity, float totalCost) {
//
//}


//// Version D - 1
//#include <stdio.h>
//
//// main function
//int main(void) {
//
//    // variable declaration
//    int i, j, k;
//
//    // outer for loop
//    for (i = 2; i >= 1; --i) {
//        // inner for loop - 1
//        for (j = 2; j >= 1; --j) {
//            // inner for loop - 2
//            for (k = 2; k >= 1; --k) {
//                printf("[ %d %d %d ]\n", i, j, k); // output
//            }
//        }
//    }
//
//    return 0;
//}



//// Version C - 2
//#include <stdio.h>
//
//// variable declaration
//float calculateWeeklySalary(int grade, float hrsWorked);
//void printDetails(int grade, float hrsWorked, float salary);
//
//// main function
//int main(void) {
//
//    // variable declaration
//    int grade;
//    float hrsWorked;
//
//    // input the grade
//    printf("Input the grade: "); // prompt
//    scanf("%d", &grade);
//
//    // input the total no of hours worked during the week
//    printf("The total no of hours worked during the week: "); // prompt
//    scanf("%f", &hrsWorked);
//
//    // output
//    printDetails(grade, hrsWorked, calculateWeeklySalary(grade, hrsWorked));
//
//    return 0;
//}
//
//// calculate weekly salary function
//float calculateWeeklySalary(int grade, float hrsWorked) {
//    // grade selection
//    switch (grade) {
//        case 1:
//            return hrsWorked * 100.0;
//            break;
//        case 2:
//            return hrsWorked * 200.0;
//            break;
//        case 3:
//            return hrsWorked * 300.0;
//            break;
//        default:
//            printf("Invalid grade\n");
//            return 0;
//            break;
//    }
//}
//
//// print details function
//void printDetails(int grade, float hrsWorked, float salary) {
//    // print details
//    printf("Employee grade: %d\n", grade);
//    printf("Hours worked: %.2f\n", hrsWorked);
//    printf("Weekly salary of the employee: Rs. %.2f", salary);
//}


//// Version C - 1
//#include <stdio.h>
//
//// main function
//int main(void) {
//
//    // variable declaration
//    int i, j, k;
//
//    // outer for loop
//    for (i = 1; i <= 2; ++i) {
//        // inner for loop - 1
//        for (j = 1; j <= 2; ++j) {
//            //inner for loop - 2
//            for (k = 1; k <= 2; ++k) {
//                printf("[ %d %d %d ]\n", i, j, k); // output
//            }
//        }
//    }
//
//    return 0;
//}


//// Version B - 2
//#include <stdio.h>
//
//// variable declaration
//float getDiscountPrice(int noOfGuests, float chargePerGuest);
//
//float getAmount(int noOfGuests, float chargePerGuest, float discount);
//
//// main function
//int main(void) {
//
//    // variable declaration
//    int guests;
//    float charge;
//
//    // input guest count
//    printf("Enter no of guests: "); // prompt
//    scanf("%d", &guests);
//
//    // input charge per guest
//    printf("Enter charge per guest: Rs. "); // prompt
//    scanf("%f", &charge);
//
//    // output discount
//    printf("Discount: Rs. %.2f\n", getDiscountPrice(guests, charge));
//
//    // output amount to be paid
//    printf("Amount to be paid: Rs. %.2f", getAmount(guests, charge, getDiscountPrice(guests, charge)));
//
//    return 0;
//}
//
//// discount calculation function
//float getDiscountPrice(int noOfGuests, float chargePerGuest) {
//    if (noOfGuests > 200)
//        return noOfGuests * chargePerGuest * 0.1;
//    else
//        return 0;
//}
//
//// amount calculation function
//float getAmount(int noOfGuests, float chargePerGuest, float discount) {
//    return (noOfGuests * chargePerGuest) - discount;
//}

//// Version B - 1
//#include <stdio.h>
//
//// main function
//int main(void) {
//
//    // variable declaration
//    int i, j;
//
//    // outer for loop
//    for (i = 97; i <= 101; ++i) {
//        // inner for loop
//        for (j = 1; j <= 102 - i; ++j) {
//            printf("%c", i); // output
//        }
//        printf("\n"); // newline
//    }
//
//    return 0;
//}


//// Version A - 1
//#include <stdio.h>
//
//// main function
//int main(void) {
//
//    // variable declaration
//    int i, j;
//
//    // outer for loop
//    for (i = 97; i <= 101; ++i) {
//        // inner for loop
//        for (j = 1; j <= i - 96; ++j) {
//            printf("%c", i); // print output
//        }
//        printf("\n"); // newline
//    }
//
//    return 0;
//}


//// Version A - 2
//#include <stdio.h>
//
//// function declaration
//float calcIncrement(float salary, int noofYearsWorked);
//
//float calcTotSalary(float salary, float increment);
//
//// main function
//int main(void) {
//
//    // variable declaration
//    int noofYearsWorked;
//    float salary;
//
//    // input salary
//    printf("Enter Salary: Rs. "); // prompt
//    scanf("%f", &salary);
//
//    // input number of years worked
//    printf("Enter no of years worked: "); // prompt
//    scanf("%d", &noofYearsWorked);
//
//    // output increment
//    printf("Increment: Rs. %.2f\n", calcIncrement(salary, noofYearsWorked));
//
//    // output total salary
//    printf("Total Salary: Rs. %.2f", calcTotSalary(salary, calcIncrement(salary, noofYearsWorked)));
//
//    return 0;
//}
//
//// increment calculation function
//float calcIncrement(float salary, int noofYearsWorked) {
//    if (noofYearsWorked > 2)
//        return salary * 0.1;
//    else
//        return 0;
//}
//
//// total salary calculation function
//float calcTotSalary(float salary, float increment) {
//    return salary + increment;
//}