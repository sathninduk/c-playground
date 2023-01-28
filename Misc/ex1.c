#include <stdio.h>

double circleArea(double r) {
    return (22.0 / 7) * r * r;
}

int ex1(void) {
    double radius;

    // input radius
    printf("Enter radius: "); //prompt
    scanf("%lf", &radius);

    printf("Area: %lf", circleArea(radius));

    return 0;
}