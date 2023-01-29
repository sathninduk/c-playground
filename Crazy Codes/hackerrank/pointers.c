#include <stdio.h>

void update(int *a,int *b) {

    // variable initializing
    int x = *a, y = *b;

    // addition
    *a = x + y;

    // absolute subtraction
    if (x - y < 0)
        *b = (x - y) * -1;
    else
        *b = x - y;

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}