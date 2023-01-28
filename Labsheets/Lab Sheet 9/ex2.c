#include <stdio.h>

// main function
int main(void) {

    // variable declaration
    int i, qty;
    float price, total = 0;
    char item_id[5], name[100];

    // file pointer declaration
    FILE *cfPtr;

    // file writing section
    // file open
    cfPtr = fopen("purchase.txt", "w");

    // file creation error handling
    if (cfPtr == NULL) {
        printf("File \"purchase.txt\" failed to create");
        return -1;
    }

    // input for loop
    for (i = 1; i <= 4; i++) {

        // item heading
        printf("Item %d\n", i);

        // input item ID
        printf("Item ID: "); // prompt
        scanf("%s", item_id);

        // input item name
        printf("Item Name: "); // prompt
        scanf("%s", name);

        // input item quantity
        printf("Quantity (kg): "); // prompt
        scanf("%d", &qty);

        // input item price
        printf("Price (for 1kg): Rs. "); // prompt
        scanf("%f", &price);

        printf("\n"); // new item breaking new line (just for better formatting)

        // write the file
        fprintf(cfPtr, "%s %s %d %.2f\n", item_id, name, qty, price);

    }

    fclose(cfPtr); // close file

    // file reading section
    // read file
    cfPtr = fopen("purchase.txt", "r");

    // check file opening - error handling
    if (cfPtr == NULL) {
        printf("Failed to open the file \"purchase.txt\"");
        return -1;
    }

    // table heading formatting
    printf("%s\t%s\t%s\t%s\n", "Item", "Quantity", "Unit Price", "Price(Rs.)");

    // read first line
    fscanf(cfPtr, "%s %s %d %f", item_id, name, &qty, &price);

    // read file - other lines
    while (!feof(cfPtr)) { // read until reach to the end of file

        // print item
        printf("%s\t%d\t\t\t%.2f\t\t%.2f\n", name, qty, price, price * qty);

        // append value to the total
        total += price * qty;

        // read next line
        fscanf(cfPtr, "%s %s %d %f", item_id, name, &qty, &price);

    }

    fclose(cfPtr); // close file

    // print total
    printf("Total\t\t\t\t\t\t\t%.2f", total);

}