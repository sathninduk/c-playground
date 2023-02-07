#include <stdio.h>

int main(void) {

    int maxDays[28] = {0}, minDays[28] = {0}, minCount = 0, maxCount = 0, i, j;
    float maxUnits, minUnits, total = 0;

    float usage[4][7] = {
            {1.2, 2.1, 0.8, 0.0, 1.0, 1.3, 4.0},
            {1.5, 3.2, 1.0, 1.3, 4.0, 1.5, 3.2},
            {2.3, 0.4, 1.2, 2.1, 0.8, 0.0, 2.6},
            {2.1, 1.7, 7.0, 1.2, 2.1, 0.8, 0.0}
    };

    maxUnits = usage[0][0];
    minUnits = usage[0][0];

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 7; j++) {

            // max
            if (maxUnits <= usage[i][j]) {

                if (maxUnits == usage[i][j]) {
                    maxCount++;
                    maxDays[maxCount] = i * 7 + j + 1;
                } else {
                    maxCount = 0;
                    maxDays[0] = i * 7 + j + 1;
                }

                maxUnits = usage[i][j];

            }

            // min
            if (minUnits >= usage[i][j]) {

                if (minUnits == usage[i][j]) {
                    minCount++;
                    minDays[minCount] = i * 7 + j + 1;
                } else {
                    minCount = 0;
                    minDays[0] = i * 7 + j + 1;
                }

                minUnits = usage[i][j];
            }

            // total
            total += usage[i][j];

        }
    }

    // Day of the Month with maximum usage
    printf("Day(s) of the Month with maximum usage: ");
    for (i = 0; i < maxCount + 1; i++) {
        if (i == maxCount)
            printf("%d", maxDays[i]);
        else
            printf("%d, ", maxDays[i]);
    }
    printf("\n");

    // Maximum Usage in units
    printf("Maximum Usage in units: %.1f\n", maxUnits);

    // Day of the Month with minimum usage
    printf("Day(s) of the Month with minimum usage: ");
    for (i = 0; i < minCount + 1; i++) {
        if (i == minCount)
            printf("%d", minDays[i]);
        else
            printf("%d, ", minDays[i]);
    }
    printf("\n");

    // Minimum Usage in units
    printf("Minimum Usage in units: %.1f\n", minUnits);

    // Average usage for the Month
    printf("Average usage for the Month: %.1f\n", total / 28);

    // Total usage for the Month
    printf("Total usage for the Month: %.1f\n", total);

    return 0;
}