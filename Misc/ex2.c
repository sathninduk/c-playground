#include <stdio.h>

int sum(int n1, int n2) {
    return n1 + n2;
}

int multiply(int n1, int n2) {
    return n1 * n2;
}

int square(int n) {
    return n * n;
}

int main(void) {

    int result = square(sum(multiply(3, 4), multiply(5, 7)));
    printf("%d", result);

    return 0;
}