// Version B - 2
#include <stdio.h>

// variable declaration
float getDiscountPrice(int noOfGuests, float chargePerGuest);

float getAmount(int noOfGuests, float chargePerGuest, float discount);

// main function
int main(void) {

    // variable declaration
    int guests;
    float charge;

    // input guest count
    printf("Enter no of guests: "); // prompt
    scanf("%d", &guests);

    // input charge per guest
    printf("Enter charge per guest: Rs. "); // prompt
    scanf("%f", &charge);

    // output discount
    printf("Discount: Rs. %.2f\n", getDiscountPrice(guests, charge));

    // output amount to be paid
    printf("Amount to be paid: Rs. %.2f", getAmount(guests, charge, getDiscountPrice(guests, charge)));

    return 0;
}

// discount calculation function
float getDiscountPrice(int noOfGuests, float chargePerGuest) {
    if (noOfGuests > 200)
        return noOfGuests * chargePerGuest * 0.1;
    else
        return 0;
}

// amount calculation function
float getAmount(int noOfGuests, float chargePerGuest, float discount) {
    return (noOfGuests * chargePerGuest) - discount;
}