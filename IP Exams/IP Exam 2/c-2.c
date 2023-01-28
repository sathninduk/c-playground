// Version C - 2
#include <stdio.h>

// variable declaration
float calculateWeeklySalary(int grade, float hrsWorked);

void printDetails(int grade, float hrsWorked, float salary);

// main function
int main(void) {

    // variable declaration
    int grade;
    float hrsWorked;

    // input the grade
    printf("Input the grade: "); // prompt
    scanf("%d", &grade);

    // input the total no of hours worked during the week
    printf("The total no of hours worked during the week: "); // prompt
    scanf("%f", &hrsWorked);

    // output
    printDetails(grade, hrsWorked, calculateWeeklySalary(grade, hrsWorked));

    return 0;
}

// calculate weekly salary function
float calculateWeeklySalary(int grade, float hrsWorked) {
    // grade selection
    switch (grade) {
        case 1:
            return hrsWorked * 100.0;
            break;
        case 2:
            return hrsWorked * 200.0;
            break;
        case 3:
            return hrsWorked * 300.0;
            break;
        default:
            printf("Invalid grade\n");
            return 0;
            break;
    }
}

// print details function
void printDetails(int grade, float hrsWorked, float salary) {
    // print details
    printf("Employee grade: %d\n", grade);
    printf("Hours worked: %.2f\n", hrsWorked);
    printf("Weekly salary of the employee: Rs. %.2f", salary);
}