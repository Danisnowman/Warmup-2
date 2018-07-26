//
//  main.c
//  Warmup 2
//
//  Created by Daniel Hernández on 7/25/18.
//  Copyright © 2018 Daniel Hernández. All rights reserved.
//

#include <stdio.h>
#include "commonFunctions.h"
#include "structs.h"
#define savedPointMaxLength 20

int main(int argc, const char * argv[]) {
    struct savePoint savedPoint[savedPointMaxLength];
    for (int i = 0; i < savedPointMaxLength; i++) {
        savedPoint[i].x = askDouble("Enter the first value: ");
        savedPoint[i].y = askDouble("Enter the second value: ");
        savedPoint[i].z = askDouble("Enter the third value: ");
        printf("\n");
    }
    for (int i = 0; i < savedPointMaxLength; i++) {
        printf("Point X: %lf\n", savedPoint[i].x);
        printf("Point Y: %lf\n", savedPoint[i].y);
        printf("Point Z: %lf\n", savedPoint[i].z);
        printf("\n");
    }
    return 0;
}
