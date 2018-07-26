//
//  commonFunctions.h
//  Warmup 2
//
//  Created by Daniel Hernández on 7/25/18.
//  Copyright © 2018 Daniel Hernández. All rights reserved.
//

#ifndef commonFunctions_h
#define commonFunctions_h

#include <stdio.h>

#define maxLength 80                        //"maxLength" is used to read strings with a maximun total of letters which is it's length (80).

double askDouble(char text[maxLength]){     //Asks user for a double, returns said double
    double input;
    printf("%s", text);
    scanf("%lf", &input);
    return input;
}

int askInt(char text[maxLength]){           //Asks user for a integer, returns said integer
    int input;
    printf("%s", text);
    scanf("%d", &input);
    return input;
}

char askChar(char text[maxLength]){       //Asks user for a char array, returns said char array. NOTE: CURRENTLY NOT WORKING
 char input[maxLength];
 printf("%s", text);
 scanf("%s", &input[maxLength]);
 return input[maxLength-1];
 }

#endif /* commonFunctions_h */
