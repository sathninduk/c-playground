#include <stdio.h>

int file (void) {

    FILE *cfPtr; // file pointer

    // write
    cfPtr = fopen("numbers.txt", "w"); // open

    if(cfPtr == NULL) { // exist?
        printf("File failed to create"); // error message
        return -1;
    }

    fprintf(cfPtr, "%d\n", 34); // write

    fclose(cfPtr); // close
//
//    int x;
//
//    // read
//    cfPtr = fopen("numbers.txt", "r"); // open
//
//    if(cfPtr == NULL) { // exist ?
//        printf("File failed to open"); // error message
//        return -1;
//    }
//
//    int y;
//    char a;
//    float b;
////    fscanf(cfPtr, "%d", &x); // read
//
//    while (!feof(cfPtr)) {
//        fscanf(cfPtr, "%d %f %d", &x, &b, &y);
//        printf ("%d %f %d\nhsiydiweuwqimxnxershjkhggsrafjbkjghjjt5gfghjguyghfgyzgygfb=", x, b, y);
//    }
//
//    fclose(cfPtr); // close





    return 0;
}