// tutorial 9 - ex 3
#include <stdio.h>

// main function
int main(void) {

    // array declaration
    float sales[5][4];

    // variable declaration
    int i, j;
    float productSales, totalSales = 0;

    // input for loop
    // outer for loop
    for (i = 0; i < 5; i++) {

        // product headline
        printf("Product %d\n", i + 1);

        // inner for loop
        for (j = 0; j < 4; j++) {
            // input sale
            printf("Amount (salesperson - %d): $ ", j + 1); // prompt
            scanf("%f", &sales[i][j]);
        }

        printf("\n"); // formatting newline

    }

    // output sales (each)
    for (i = 0; i < 5; i++) { // outer loop
        productSales = 0; // reset product sales
        for (j = 0; j < 4; j++) { // inner loop
            productSales += sales[i][j]; // append product sales
            totalSales += sales[i][j]; // append total sales
        }
        // output product sales
        printf("Product %d - Total sales: $ %.2f\n", i + 1, productSales);
    }

    // output total sales
    printf("Total sales: $ %.2f\n", totalSales);

    return 0;
}