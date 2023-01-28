#include <stdio.h>

int k() {

    int n;

    printf("Input: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n * 2; ++j) {
            if (j <= i)
                printf("%d ", n - j + 1);
            else if (i + j >= n * 2)
                printf("%d ", j + 1 - n);
            else
                printf("%d ", n - i);
        }
        printf("\n");
    }

    for (int i = n * 2 - 2; i >= n; --i) {
        for (int j = 1; j < n * 2; ++j) {
            if (j <= n - (n * 2 - i - 1))
                printf("%d ", n - j + 1);
            else if (n - (n * 2 - i - 1) + j >= n * 2)
                printf("%d ", j + 1 - n);
            else
                printf("%d ", 2 * n - i);
        }
        printf("\n");
    }

    return 0;
}