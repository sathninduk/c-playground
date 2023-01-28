// Version A - 2
#include <stdio.h>

// function declaration
float calcIncrement(float salary, int noofYearsWorked);

float calcTotSalary(float salary, float increment);

// main function
int main(void) {

    // variable declaration
    int noofYearsWorked;
    float salary;

    // input salary
    printf("Enter Salary: Rs. "); // prompt
    scanf("%f", &salary);

    // input number of years worked
    printf("Enter no of years worked: "); // prompt
    scanf("%d", &noofYearsWorked);

    // output increment
    printf("Increment: Rs. %.2f\n", calcIncrement(salary, noofYearsWorked));

    // output total salary
    printf("Total Salary: Rs. %.2f", calcTotSalary(salary, calcIncrement(salary, noofYearsWorked)));

    return 0;
}

// increment calculation function
float calcIncrement(float salary, int noofYearsWorked) {
    if (noofYearsWorked > 2)
        return salary * 0.1;
    else
        return 0;
}

// total salary calculation function
float calcTotSalary(float salary, float increment) {
    return salary + increment;
}